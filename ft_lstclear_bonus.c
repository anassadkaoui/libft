/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:17:07 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/10 18:15:29 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		tmp = *lst;
		(*del)((*lst)->content);
		*lst = (*lst)->next;
		free(tmp);
	}
	*lst = NULL;
}

// int main(void)
// {
// 	t_list	*lst = NULL;
// 	t_list	*new_node;

// 	new_node = ft_lstnew(ft_strdup("first"));
// 	ft_lstadd_back(&lst, new_node);
// 	new_node = ft_lstnew(ft_strdup("second"));
// 	ft_lstadd_back(&lst, new_node);
// 	new_node = ft_lstnew(ft_strdup("third"));
// 	ft_lstadd_back(&lst, new_node);

// 	ft_lstclear(&lst, del);
// 	lst = lst->next;
// 	while (lst)
// 	{
// 		printf("%p\n", (void *)lst);
// 		lst = lst->next;
// 	}

// }
