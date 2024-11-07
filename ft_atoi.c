/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:19:15 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/06 12:15:22 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	long	total;
	int		sign;
	long	tmp;

	total = 0;
	sign = 1;
	tmp = 0;
	ptr = handle_whitespaces_and_sign(ptr, &sign);
	while (*ptr >= '0' && *ptr <= '9')
	{
		if (sign == -1 && tmp == 214748364 && (*ptr - '0') == 8)
			return (-2147483648);
		total = (total * 10) + (*ptr - '0');
		if (total < tmp && sign == 1)
			return (-1);
		if (total < tmp && sign == -1)
			return (0);
		ptr++;
		tmp = total;
	}
	return ((int)(total * sign));
}
