/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:21:11 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/06 18:10:21 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	if (!dest && !src)
		return (NULL);
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (n--)
		*destination++ = *source++;
	return ((void *)dest);
}

// int main(void)
// {
// 	char src[] = "anwar";
// 	char dst[] = "anassadkaoui";
// 	ft_memcpy(dst, src, 5);
// 	//memcpy(dst, src, sizeof(src));
// 	int i = 0;
// 	while(i < 12)
// 		printf("%c", dst[i++]);
// }
