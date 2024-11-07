/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:49:02 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/06 17:37:47 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)ptr;
	while (n--)
		*str++ = (unsigned char)x;
	return (ptr);
}

// int main(void)
// {
// 	int i;
// 	int arr[10];

// 	//ft_memset(arr,'z',sizeof(arr));
// 	memset(arr,'z',sizeof(arr));

// 	i = 0;
// 	while(i < 10)
// 	{
// 		printf("%c\n", arr[i]);
// 		i++;
// 	}
// }
