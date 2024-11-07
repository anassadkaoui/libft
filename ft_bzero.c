/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:32:31 by asadkaou          #+#    #+#             */
/*   Updated: 2024/10/30 19:38:10 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <stdio.h>

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)ptr;
	while (n--)
		*str++ = (unsigned char)0;
}
