/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:46:03 by atsug0            #+#    #+#             */
/*   Updated: 2022/09/22 13:47:33 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list	*temp;

	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}