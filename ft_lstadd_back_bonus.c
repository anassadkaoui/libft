/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:34:58 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/10 16:36:42 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	back = ft_lstlast(*lst);
	back->next = new;
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

// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// }