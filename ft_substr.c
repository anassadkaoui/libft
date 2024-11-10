/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:17:53 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/10 12:02:35 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*substr;

	str_len = ft_strlen((char *)s);
	if (start >= str_len)
	{
		substr = malloc(1);
		if (substr)
			substr[0] = '\0';
		return (substr);
	}
	if (start + len > str_len)
		len = str_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strncpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

// int main()
// {
// 	printf("%s\n", ft_substr("aymane", 2, -1));	
// }

// int main(void)
// {
// 	const char *s = "anassadkaoui";
// 	printf("%s", ft_substr(s, 4, 3));
// }