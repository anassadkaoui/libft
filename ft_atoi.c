/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:19:15 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/16 19:18:03 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_over_llmax_llmin(size_t result, int sign, size_t c)
{
	if (result > (((size_t)9223372036854775807 - c) / 10) && (sign == -1))
		return (0);
	if (result > (((size_t)9223372036854775807 - c) / 10) && (sign == 1))
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	size_t	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (check_over_llmax_llmin(result, sign, (str[i] - '0')) != (1))
			return (check_over_llmax_llmin(result, sign, (str[i] - '0')));
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}
