/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:05:23 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/05 12:10:32 by asadkaou         ###   ########.fr       */
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

// int main() {
//     char dest[20] = "Hello, ";
//     const char *src = "World!";
//     // Calculate the initial length of 'dest'
//     size_t dest_initial_len = strlen(dest);

//     // Test my_strlcat
//     size_t result = ft_strlcat(dest, src, sizeof(dest));

//     printf("After my_strlcat: \"%s\"\n", dest);
//     printf("Expected result length: %zu\n", dest_initial_len + strlen(src));
//     printf("Returned result length: %zu\n", result);

//     // Check if the result is as expected
//	   if (strcmp(dest, "Hello, World!") == 0 &&
//     result == dest_initial_len + strlen(src))
//     {
//         printf("Test passed!\n");
//     } else {
//         printf("Test failed!\n");
//     }

//     return 0;
// }
