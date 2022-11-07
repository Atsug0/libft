/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:00:38 by atsug0            #+#    #+#             */
/*   Updated: 2022/09/21 15:36:59 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *res;

    if (count <= 0 || size <= 0)
        return (NULL);
    res = (void *)malloc(count * size);
    if (!res)
        return (NULL);
    ft_bzero(res,count);
    return (res);
}