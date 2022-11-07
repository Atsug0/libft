/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:21:56 by hmoulard          #+#    #+#             */
/*   Updated: 2022/09/21 16:19:16 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int j;
	char	*res;
	
	i = -1;
	res = malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (!res)
		return (NULL);
	while (s1[++i])
		res[i] = s1[i];
	j = -1;
	while (s2[++j])
		res[i++] = s2[j];
	res[i] = '\0';
	return (res); 
}