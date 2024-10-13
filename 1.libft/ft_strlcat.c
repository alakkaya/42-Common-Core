/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:46:27 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/13 16:25:17 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i, j;
	j = 0;
	i = 0;

	while (dst[i] && i < dstsize)
		i++;

	// Eğer dstsize sıfırdan büyükse kopyalamaya devam et
	if (dstsize > 0 && i < dstsize - 1)
	{
		while (src[j] && i < dstsize - 1)
		{
			dst[i] = src[j]; 
			i++;
			j++;
		}
		dst[i] = '\0'; 
	}

	while (src[j])
		j++;

	return (i + j); // Toplam uzunluk döndür
}
int main()
{
	size_t len;
	const char p[15] = "ali";
	char dest[50] = "akkaya";
	int dest_size=sizeof(dest);
	len = ft_strlcat(dest, p, dest_size);
	printf("%ld\n %d", len,dest_size);
	printf("%s\n", dest);
}