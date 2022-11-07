/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 08:47:46 by atsug0            #+#    #+#             */
/*   Updated: 2022/09/21 15:17:59 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_memchr(const void *s, int c, size_t n)
 {
     size_t i;

     i = 0;
     while (i < n)
     {
        if (((unsigned char *) s)[i] == c)
            return ((void *)&s[i]);
        i++;
     }
     return (NULL);
 }
