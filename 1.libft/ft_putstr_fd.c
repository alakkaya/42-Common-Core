/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:11:07 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/24 21:22:54 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void    ft_putstr_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    while (s[i])
    {
        write(fd,&s[i],1);
        i++;
    }
}
// int main()
// {
//     int fd = open("alı.text", O_WRONLY | O_CREAT | O_APPEND, 0644);
//     ft_putstr_fd("aliakkaya",fd);
// }