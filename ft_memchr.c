/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:15:30 by asadkaou          #+#    #+#             */
/*   Updated: 2024/10/30 21:16:24 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

// int	main(void) 
// {
// 	unsigned char arr[] = "anassadkaoui";
// 	unsigned char *result = (unsigned char *)ft_memchr(arr, 'k', 12);
// 	if (result == NULL)
// 		printf("NULL");
// 	else
// 		printf("Return value: %c\n", *result);
//     return 0;
// }
