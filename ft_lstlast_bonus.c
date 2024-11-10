/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:08:49 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/10 18:54:21 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main(void)
// {
// 	t_list *lst = NULL;
// 	t_list *new_element;

// 	new_element = ft_lstnew("first");
// 	ft_lstadd_back(&lst, new_element);

// 	new_element = ft_lstnew("second");
// 	ft_lstadd_back(&lst, new_element);

// 	new_element = ft_lstnew("third");
// 	ft_lstadd_back(&lst, new_element);
// 	printf("%s", ft_lstlast(lst)->content);
// }