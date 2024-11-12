/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:15:30 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/12 12:49:59 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*source;

	source = (unsigned char *)s;
	while (n--)
	{
		if ((unsigned char)c == *source)
			return ((void *)source);
		source++;
	}
	return (NULL);
}
