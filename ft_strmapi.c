/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 22:10:13 by asadkaou          #+#    #+#             */
/*   Updated: 2024/10/31 22:40:04 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <stddef.h>
#include <stdio.h>

// char	uppercase_even(unsigned int i, char c) {
//     if (i % 2 == 0 && c >= 'a' && c <= 'z') {
//         return c - ('a' - 'A');
//     }
//     return c;
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	length;
	char			*result;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	length = 0;
	while (s[length] != '\0')
		length++;
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[length] = '\0';
	return (result);
}

// int main() {
//     char *original = "hello";
//     char *result = ft_strmapi(original, uppercase_even);

//     if (result != NULL) {
//         printf("Original: %s\n", original);
//         printf("Transformed: %s\n", result);
//         free(result);
//     }

//     return 0;
// }
