/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:12:38 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/12 12:50:38 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	n = n - 1;
	while (*s1 == *s2 && *s1 && *s2 && n--)
	{
		s2++;
		s1++;
	}
	return ((unsigned char )*s1 - (unsigned char)*s2);
}
