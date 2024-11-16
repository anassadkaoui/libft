/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:10:13 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/16 20:23:21 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	char			*tmp;

	if (s == NULL || f == NULL)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen((const char *)s) + 1));
	if (result == NULL)
		return (NULL);
	tmp = result;
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (tmp);
}
