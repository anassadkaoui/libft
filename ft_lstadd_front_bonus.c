/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 12:08:45 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/10 16:41:36 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
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

// 	new_element = ft_lstnew("newfirst");
// 	ft_lstadd_front(&lst, new_element);

// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// }
