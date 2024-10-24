/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:11:07 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/24 21:29:16 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
void    ft_putnbr_fd(int n, int fd)
{
    long nb;
    
    nb = n;
    if (nb < 0)
    {
        ft_putchar_fd('-',fd);
        nb = (nb * -1);
    }
    if (nb < 10)
        ft_putchar_fd(nb + '0',fd);
    if(nb > 9)
    {
        ft_putnbr_fd(nb / 10,fd);
        ft_putnbr_fd(nb % 10,fd);
    }
}

// int main()
// {
//     int fd = open("ali.text", O_WRONLY | O_CREAT | O_APPEND, 0644);
//     ft_putnbr_fd(-2332, fd);

    
//     // Dosya işlemi bittiğinde kapatıyoruz
//     close(fd);
//     }
