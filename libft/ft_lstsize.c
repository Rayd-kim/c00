/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:25:47 by youskim           #+#    #+#             */
/*   Updated: 2021/11/22 18:31:10 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lstsize(t_list *lst)
{
	int	size;
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (temp == 0)
		return (NULL);
	temp->next = lst->next;
	size = 0;
	while (temp->next != NULL)
	{
		size++;
		temp = 

