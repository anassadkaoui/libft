/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:34:23 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/10 15:17:49 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*fill_str(char *str, int n, int length, int is_negative)
{
	str[length] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (is_negative)
		str[0] = '-';
	while (n != 0)
	{
		str[--length] = '0' + (n % 10);
		n /= 10;
	}
	return (str);
}

static unsigned	int	count_digits(int n, int length)
{
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static char	*handle_min_int(void)
{
	char	*str;

	str = (char *)malloc(12 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;
	int		is_negative;

	if (n == -2147483648)
		return (handle_min_int());
	is_negative = 0;
	if (n <= 0)
	{
		if (n != 0)
			is_negative = 1;
		n = -n;
		length = 1;
	}
	else
		length = 0;
	length = count_digits(n, length);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (fill_str(str, n, length, is_negative));
}
