/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:19:45 by atsug0            #+#    #+#             */
/*   Updated: 2022/09/21 14:16:56 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char *ft_strrchr(const char *s, int c)
 {
    int    i;
    
    i = ft_strlen((char *)s);
    while (s[--i])
        if (s[i] == c)
            return ((char *)&s[i]);
    return (NULL);
 }