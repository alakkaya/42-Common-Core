/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:08:45 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/17 16:55:03 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strdup(const char *s1)
{
	size_t i;
	char *dest;

	i = 0;
	while (s1[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	
	//strcpy
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

int main(void)
{
	 char *cp1 = "Bilgisayar";
	char *cp2 = ft_strdup(cp1);

	printf("İlk karakter dizisi: %s\n", cp1);
	printf("Kopyalanan karakter dizisi: %s\n", cp2);

	free(cp2); // malloc ile ayrılan belleği serbest bırakın
	return 0;
}