/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:19:15 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/10 20:10:52 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*handle_whitespaces_and_sign(const char *ptr, int *sign)
{
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	if (*ptr == '-')
	{
		*sign = -1;
		ptr++;
	}
	else if (*ptr == '+')
		ptr++;
	return (ptr);
}

int	ft_atoi(const char *ptr)
{
	long long	total;
	int			sign;
	long long	tmp;

	total = 0;
	sign = 1;
	tmp = 0;
	ptr = handle_whitespaces_and_sign(ptr, &sign);
	while (*ptr >= '0' && *ptr <= '9')
	{
		total = (total * 10) + (*ptr - '0');
		if (total < tmp && sign == 1)
			return (-1);
		if (total < tmp && sign == -1)
			return (0);
		ptr++;
		tmp = total;
	}
	return (total * sign);
}
