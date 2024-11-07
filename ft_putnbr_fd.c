/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:02:29 by asadkaou          #+#    #+#             */
/*   Updated: 2024/10/31 13:16:00 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static int	cpy_digits(int n, int i, char *buffer)
{
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	buffer[11];

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	i = 0;
	i = cpy_digits(n, i, buffer);
	while (i > 0)
		write(fd, &buffer[--i], 1);
}

// int main() {
//     ft_putnbr_fd(13371337, 1);
//     ft_putnbr_fd(-21478, 1);
//     ft_putnbr_fd(0, 1);

// 	return (0);
// }
