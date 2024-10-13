/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:25:08 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/13 19:52:41 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* strchr ile farkı:
strchr(): Sadece C string'leri üzerinde çalışır. Bu,null karakter ('\0') ile sonlandırılmış bir karakter dizisi olduğu anlamına gelir.
 strchr() fonksiyonu aramayı bu null karaktere kadar devam ettirir.


memchr(): Her türlü bellek bloğunda çalışabilir ve herhangi bir veri tipi üzerinde arama yapabilir. 
Yani, string gibi null ile sonlandırılmamış ham bellek bölgelerinde de kullanılabilir.
Verilen uzunluk kadar arama yapar.
*/
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t	i;
	i = 0;

	while(i < n)
	{
		if(((unsigned char*)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}

int main()
{
	char *s = "hello world";
	    char *ft_result = ft_memchr(s, 'w', 7);

	if (ft_result)
        printf("ft_memchr: Found 'w' at: %s\n", ft_result);
    else
        printf("ft_memchr: 'w' not found in the first 7 bytes\n");

}