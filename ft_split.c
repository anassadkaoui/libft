/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:21:07 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/10 11:57:24 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	frr(char **s, int i)
{
	while (i > 0)
	{
		free(s[i - 1]);
		i--;
	}
	free(s);
}

static unsigned int	count_words(char const *s, char c)
{
	unsigned int	i;
	unsigned int	how_many_words;

	i = 0;
	how_many_words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			how_many_words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (how_many_words);
}

static int	get_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static char	**re(const char *s, char c, char **res, size_t i)
{
	size_t	y;

	while (*s)
	{
		y = 0;
		while (*s == c)
			s++;
		if (*s == '\0')
		{
			res[i] = NULL;
			return (res);
		}
		res[i] = (char *)malloc((get_len(s, c) + 1) * sizeof(char));
		if (!res[i])
		{
			frr(res, i);
			return (NULL);
		}
		while (*s != c && *s)
			res[i][y++] = *s++;
		res[i][y] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	how_many_delimiters;
	size_t	i;

	how_many_delimiters = 0;
	i = 0;
	while (s[i] && s[i] == (const char)c)
	{
		how_many_delimiters++;
		i++;
	}
	if (ft_strlen(s) == how_many_delimiters)
	{
		res = (char **)malloc(sizeof(char *));
		if (!res)
			return (NULL);
		res[0] = NULL;
		return (res);
	}
	res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (re(s, c, res, 0));
}

// int	main(void)
// {
// 	char *s = NULL;
// 	char **tokens = ft_split(s, ',');
// 	//printf("%d", count_words(s, ','));
// 	int i; 
// 	i = 0;
// 	while (tokens[i] != NULL)
// 	  	printf("%s\n", tokens[i++]); 
// }
