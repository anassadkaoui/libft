/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:26:20 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/11 08:53:37 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	if (len == 0)
		return ((void *)dst);
	if (!dst && !src)
		return (NULL);
	if (src == dst)
		return ((void *)src);
	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (src > dst)
		return (ft_memcpy(dst, src, len));
	i = len - 1;
	while (i > 0)
	{
		d[i] = s[i];
		i--;
	}
	d[i] = s[i];
	return (dst);
}
