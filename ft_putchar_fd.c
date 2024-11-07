/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:50:06 by asadkaou          #+#    #+#             */
/*   Updated: 2024/10/31 12:50:22 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main() {
//     // Print 'A' to standard output
//     ft_putchar_fd('A', 1);

//     // Print 'B' to standard error
//     ft_putchar_fd('B', 2);

//     return 0;
// }
