/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:08:16 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/17 17:23:41 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    // memmove ile farkı?
    size_t i;

    i = 0;
    // overlap varsa 2 bellek alanı çakışırsa undefined davranış
    if (dst == NULL && src == NULL)
        return (NULL);

    while (i < n)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dst);
}
size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strdup(const char *s1)
{
    size_t i;
    char *dest;

    i = 0;
    while (s1[i])
        i++;
    dest = (char *)malloc(sizeof(char) * (i + 1));
    i = 0;

    // strcpy
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = '\0';

    return (dest);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    if (!s)
        return (NULL);
    i = ft_strlen(s) - start;
    if (len < i)
        i = len;
    if (start > ft_strlen(s) - 1)
        return (ft_strdup(""));
    str = (char *)malloc(sizeof(char) * (i + 1));
    if (!str)
        return (0);
    ft_strlcpy(str, s + start, i + 1);
    return (str);
}

int main()
{
    char *s = "akkaya";
    printf("%s", ft_substr(s, 2, 2));

    return 0;
}