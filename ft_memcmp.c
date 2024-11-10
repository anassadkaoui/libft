/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:18:19 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/10 19:46:17 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char	*pointer1;
	const unsigned char	*pointer2;

	if (num == 0)
		return (0);
	pointer1 = (const unsigned char *)ptr1;
	pointer2 = (const unsigned char *)ptr2;
	while (num--)
	{
		if (*pointer1 != *pointer2)
			return ((*pointer1) - (*pointer2));
		pointer1++;
		pointer2++;
	}
	return (0);
}
// #include "libc.h"
// int main(void)
// {
// 	// unsigned char ptr1[] = "anaasadkaoui";
// 	// unsigned char ptr2[] = "anassadkaoui";
// 	printf("%d\n",ft_memcmp("bé","b", 10));
// 	printf("%d",memcmp("bé","b", 10));
// }
