/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 22:07:49 by youskim           #+#    #+#             */
/*   Updated: 2021/12/01 13:46:42 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	t_list	*result;

	temp = lst;
	while (lst != NULL)
	{
		new = ft_newlst(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		new->next = lst->next;
		temp = new;
		lst = lst->next;
	}
	
	return (result);
}
