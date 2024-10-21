/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:58:07 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/21 18:38:49 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char *str;
	int len, temp, is_negative;

	len = 0;
	is_negative = 0;

	// 1. Negatif kontrolü
	if (n < 0)
	{
		is_negative = 1;
		n = -n; // Sayıyı pozitif yap
	}
	else if (n == 0)
	{
		// Eğer sayı 0 ise direkt "0" döndür
		str = (char *)malloc(sizeof(char) * 2);
		if (str)
		{
			str[0] = '0';
			str[1] = '\0';
		}
		return str;
	}

	// 2. Rakam sayısını belirle
	while (temp > 0)
	{
		len++;
		temp /= 10;
	}
	// 3. Bellek ayır
	str = (char *)malloc(sizeof(char) * (len + is_negative + 1));
	if (!str)
		return NULL;

	// 4. Sayıyı karakter dizisine yaz
	str[len + is_negative] = '\0'; // Null terminatör ekle
    while (len > 0) {
        str[len + is_negative - 1] = (n % 10) + '0'; // Rakamı al ve karakter dizisine yaz
        n /= 10;
        len--;
    }
	// 5. Negatif işaret ekle
    if (is_negative) {
        str[0] = '-';
    }

    return str;
}