/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:04:51 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/13 19:24:16 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if (s1[i] != s2[i]) 
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return 0;
}

int main()
{
    char *str1 = "Hello, World!";
    char *str2 = "Hemlo, World!";

    printf("%d", ft_strncmp(str1, str2, 3));
    
}