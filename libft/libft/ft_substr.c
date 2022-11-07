/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:21:06 by atsug0            #+#    #+#             */
/*   Updated: 2022/09/21 15:19:10 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    char    *res;
    size_t   i;

    res = malloc(sizeof(char *) * (len + 1));
    if (!res)
        return (NULL);
    i = 0;
    while (s[start] && i < len)
    {
        res[i] = s[start];
        i++;
        start++;
    }
    res[i] = 0;
    return (res);
        
}
