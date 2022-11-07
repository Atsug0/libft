/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:47:51 by atsug0            #+#    #+#             */
/*   Updated: 2022/10/13 21:45:07 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_find_end(t_list *begin)
{
	t_list	*temp;

	temp = begin;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

void ft_lstadd_back(t_list **lst, t_list *news)
{
	t_list	*temp;

	if (!news)
		return ;
	if (!*lst)
		*lst = news;
	else
	{
		temp = ft_find_end(*lst);
		temp->next = news;
	}
}