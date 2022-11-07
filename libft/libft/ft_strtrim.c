/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:37:10 by atsug0            #+#    #+#             */
/*   Updated: 2022/09/21 15:46:54 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_in(const char c, char const *set)
{
    size_t  i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    size_t  i;
    char    *res;

    start = 0;
    while (s1[start] && is_in(s1[start], set))
        start++;
    end = ft_strlen((char *)s1);
    while (is_in(s1[end - 1], set) && end > start)
        end--;    
    res = malloc(sizeof(char) * (end - start + 1));
    if (!res)
        return (NULL);
    i = 0;
    while (start < end)
        res[i++] = s1[start++];
    res[i] = 0;
    return (res); 
}
