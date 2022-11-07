/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:01:31 by atsug0            #+#    #+#             */
/*   Updated: 2022/09/21 11:51:02 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *res;

    res = ft_strdup((char *)s);
    if (!res)
        return (NULL);
    i = 0;
    while (res[i])
    {
        res[i] = f(i, res[i]);
        i++;
    }
    return (res);
}