/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:21:11 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/10 20:13:38 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	if (src == dest)
		return ((void *)dest);
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
// 	ft_memcpy(src, src, 5);
// 	//memcpy(dst, src, sizeof(src));
// 	int i = 0;
// 	while(i < 12)
// 		printf("%c", src[i++]);
// }
