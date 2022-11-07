/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:59:38 by atsug0            #+#    #+#             */
/*   Updated: 2022/09/21 14:08:01 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int res;
    int signe;
    int i;

    res = 0;
    signe = 1;
    i = 0;
    while (str[i] && str[i] <= ' ')
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            signe = -1;
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
        res = res * 10 + (str[i++] - '0');
    return (res * signe);
}