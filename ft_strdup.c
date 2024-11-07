/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:40:59 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/06 18:16:27 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static void	ft_strcpy(const char *s, char *dup)
{
	while (*s != '\0')
	{
		*dup = *s;
		s++;
		dup++;
	}
	*dup = '\0';
}

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = (char *)malloc(ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	ft_strcpy(s, dup);
	return (dup);
}

// int main() {
//     const char *original = "Hello, World!";
//     char *duplicate = ft_strdup(original);

//     // Test if the duplication is successful
//     if (duplicate != NULL) {
//         printf("Original: %s\n", original);
//         printf("Duplicate: %s\n", duplicate);

//         // Check if the duplicated string matches the original
//         if (strcmp(original, duplicate) == 0) {
//             printf("Test passed: .\n");
//         } else {
//             printf("Test failed: .\n");
//         }

//         free(duplicate); // Free the duplicated string
//     } else {
//         printf("Test failed: my_strdup returned NULL.\n");
//     }

//     return 0;
// }
