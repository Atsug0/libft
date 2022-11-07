/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:12:07 by hmoulard          #+#    #+#             */
/*   Updated: 2022/09/15 13:41:21 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*s;

	i = ft_strlen(src);
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	i = -1;
	while (src[++i])
	{
		s[i] = src[i];
	}
	s[i] = '\0';
	return (s);
}
