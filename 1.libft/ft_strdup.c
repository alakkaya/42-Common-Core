/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:08:45 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/17 16:08:46 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// KONTROL ET
#include "libft.h"
char *ft_strdup(const char *s1)
{
    size_t len = ft_strlen(s1) + 1;
    void *new = malloc(len);

    if (new == NULL)
        return (NULL);
    return (char *)ft_memcpy(new, s1, len);
}

int main(void)
{
    const char *cp1 = "Bilgisayar";
    char *cp2 = ft_strdup(cp1);

    printf("İlk karakter dizisi: %s\n", cp1);
    printf("Kopyalanan karakter dizisi: %s\n", cp2);

    free(cp2); // malloc ile ayrılan belleği serbest bırakın
    return 0;
}