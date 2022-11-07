/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:39:29 by atsug0            #+#    #+#             */
/*   Updated: 2022/09/21 11:53:24 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    unsigned int    nbr;
    if (n < 0)
    {
        write(fd, "-", 1);
        nbr = -n;
    }
    else
        nbr = n;
    if (nbr > 9)
    {
        ft_putnbr_fd(nbr / 10, fd);
        nbr = nbr % 10;
    }
    ft_putchar_fd(nbr + 48, fd);
}