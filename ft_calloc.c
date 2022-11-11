/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <hmoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:00:38 by atsug0            #+#    #+#             */
/*   Updated: 2022/11/09 23:13:24 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SIZE_MAX 18446744073709551615UL

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	res = (void *)malloc(count * size);
	if (!res)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}
