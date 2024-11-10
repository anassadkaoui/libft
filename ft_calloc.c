/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:16:44 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/10 13:30:25 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t size_of_elements)
{
	size_t	total;
	void	*ptr;

	if (num_elements == 0 || size_of_elements == 0)
		return (malloc(0));
	total = num_elements * size_of_elements;
	if ((total / size_of_elements) != num_elements)
		return (NULL);
	ptr = (unsigned char *)malloc(total);
	if (ptr != NULL)
		ft_memset(ptr, 0, total);
	return (ptr);
}
