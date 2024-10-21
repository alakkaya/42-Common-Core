/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:08:43 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/21 17:19:27 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char c)
{
	size_t i, counter;

	i = 0;
	counter = 0;

	while (s[i])
	{
		// Eğer şu anki karakter 'c' değilse ve bir önceki karakter 'c' ise, bir kelime başlıyor demektir.
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			counter++;
		i++;
	}
	return (counter);
}

char **ft_split(char const *s, char c)
{
	char **str;
	size_t i, j, k, word_count;

	i = 0;
	j = 0;
	k = 0;
	word_count = count_words(s, c);
	
	str = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!str)
		return NULL;
		
	while (s[i])
	{
		// Kelimenin başlangıcını bul
        while (s[i] == c)
            i++;
		if(s[i] != '\0')
		{
			k = 0;
			size_t word_len = 0;
            while (s[i + word_len] && s[i + word_len] != c)
                word_len++;
            
            str[j] = (char *)malloc(sizeof(char) * (word_len + 1));
            if (!str[j])
                return NULL;  

            // Kelimeyi kopyala
            while (s[i] && s[i] != c)
                str[j][k++] = s[i++];
            str[j][k] = '\0';  // Kelimenin sonunu işaretle
            j++;
		}
	}
	str[j] = NULL;
	return (str);
}