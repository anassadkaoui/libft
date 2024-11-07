/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:20:33 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/06 18:59:56 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isin(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*handle_all_in_set(void)
{
	char	*trimmed_str;

	trimmed_str = (char *)malloc(1);
	if (!trimmed_str)
		return (NULL);
	trimmed_str[0] = '\0';
	return (trimmed_str);
}

static char	*handle_e_equal_i(char const *s1, int i)
{
	char	*trimmed_str;

	trimmed_str = (char *)malloc(2);
	if (!trimmed_str)
		return (NULL);
	trimmed_str[0] = s1[i];
	trimmed_str[1] = '\0';
	return (trimmed_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		e;

	i = 0;
	while (s1[i])
	{
		if (!isin(s1[i], set))
			break ;
		i++;
	}
	e = ft_strlen(s1) - 1;
	while (e > i)
	{
		if (!isin(s1[e], set))
			break ;
		e--;
	}
	if (e < i)
		return (handle_all_in_set());
	if (e == i)
		return (handle_e_equal_i(s1, i));
	return (ft_substr(s1, i, (e - i) + 1));
}

// int main()
// {
//     char *str1;
//     str1 = "#bc#cbabdoulah#bc#cb#bc";
//     char str2[] = "#bc";
//     //char *str;
//    // str = TrimChar(str1, 'h');
//    // printf("%s\n", TrimChar(str1, 'h'));
//     printf ("%s\n", ft_strtrim(str1, str2));
// }
