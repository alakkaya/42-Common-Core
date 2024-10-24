/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:11:07 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/24 19:33:36 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,3);
}
int main()
{
    int fd = open("alı.text", O_WRONLY | O_CREAT | O_APPEND, 0644);
    ft_putchar_fd('a',fd);
}