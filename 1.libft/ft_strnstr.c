/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:54:17 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/13 21:18:09 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i, j;

	i = 0;

	if (needle[i] == '\0')
		return (char *)&haystack[i];

	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			// needle dizisiyle karakterleri eşleştir
			while (needle[j] && (i + j) < len && haystack[i + j] == needle[j])
				j++;
			// needle'in tamamı eşleştiyse, işaretçiyi döndür
			if (needle[j] == '\0')
				return (char *)&haystack[i];
		}
		i++;
	}
	// needle bulunamazsa NULL döndür
	return 0;
}

int main() {
    const char *haystack = "Hello, beautiful World!";
    const char *needle = "beautiful";
    size_t len = 40;

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
        printf("Found: %s\n", result);
    } else {
        printf("Not found within the first %zu characters.\n", len);
    }

    return 0;
}