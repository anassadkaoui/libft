/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadkaou <asadkaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:31:33 by asadkaou          #+#    #+#             */
/*   Updated: 2024/11/10 18:25:48 by asadkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
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

// 	ft_lstiter(lst, print_content);
// }
