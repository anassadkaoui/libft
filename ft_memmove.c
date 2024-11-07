/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:26:20 by asadkaou          #+#    #+#             */
/*   Updated: 2024/10/31 11:58:26 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static void	backward_cpy(size_t n, unsigned char *destination,
const unsigned char *source)
{
	while (n > 0)
	{
		n--;
		destination[n] = source[n];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destination;
	const unsigned char	*source;
	size_t				i;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (destination == source || n == 0)
		return ((unsigned char *)destination);
	if (destination < source)
	{
		i = 0;
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else
		backward_cpy(n, destination, source);
	return ((unsigned char *)destination);
}

// int main(void)
// {
// 	char str[] = "Hello World !";
// 	ft_memmove(str + 4, str, 4);
// 	//memmove (str + 4, str, 10);
// 	int i = 0;
// 	while (i < 13)
// 	{
// 		printf("%c\n", str[i]);
// 		i++;
// 	}
// }
