/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <hmoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:52:51 by atsug0            #+#    #+#             */
/*   Updated: 2022/11/11 16:55:46 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*to_find || !to_find)
		return ((char *)str);
	if (len == 0)
		return (NULL);
	j = 0;
	while (str[j])
	{
		i = 0;
		if (str[j] == to_find[i])
		{
			while (to_find[i] && str[j + i] == to_find[i] && i + j < len)
				i++;
			if (!to_find[i])
				return ((char *)&str[j]);
		}
		j++;
	}
	return (NULL);
}
