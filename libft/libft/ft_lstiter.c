/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:12:52 by atsug0            #+#    #+#             */
/*   Updated: 2022/09/22 14:14:10 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_listiter(t_list *lst, void (*f)(void *))
{
    t_list	*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp->next)
	{
		f(temp->content);
		temp = temp->next;
	}
	f(temp->content);
}