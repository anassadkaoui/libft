/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:05:23 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/10 12:02:04 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		dl;
	size_t		sl;

	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	if (dstsize < dl)
		return (dstsize + sl);
	if (!dst && dstsize == 0)
		return (sl);
	i = dl;
	j = 0;
	if (dstsize != 0)
	{
		while (i < dstsize -1 && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (dl + sl);
}

// int main()
// {
// 	printf("%zu\n", ft_strlcat(NULL, "hhhh", 0));
// }
