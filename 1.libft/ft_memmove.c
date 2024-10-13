/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:13:04 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/13 15:19:17 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{   size_t	i;

    i = 0;
    // src ile dest bellek alanalrı arasında çakışma olup olmadığını kontrol eder.
    // eğer src dest'ten daha düşük adreste ise veriyi sondan kopyalar son bayttan başlar
    // bu sayede veri kaybı riski olmaz
    if (dst == src || len == 0) // Null veya 0 uzunluğunda kontrol
        return (dst);
    else if (dst < src){
        while(i < len){
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
    }else{
        while(len > 0){
			len--;
            ((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
        }
    }
    return (dst);
}

int main() {
    char str1[] = "123456789";
    
    // Test 1: Çakışma yok
    printf("Before: %s\n", str1);
    ft_memmove(str1 + 4, str1, 5);  // 5 karakteri str1[0]'dan str1[4]'e kopyala
    printf("After:  %s\n", str1);

    // Test 2: Çakışma var (ters yönde kopyalama)
    char str2[] = "abcdefghi";
    printf("\nBefore: %s\n", str2);
    ft_memmove(str2, str2 + 3, 5);  // 5 karakteri str2[3]'ten str2[0]'a taşı
	//  memmove(str2, str2 + 3, 5);

    printf("After:  %s\n", str2);


    return 0;
}
/*
disaridan alinan *src nin ilk n elemanini
disaridan alinan *dst e atama islemi. 
fakat hafizada cakisma durumundan kurtulmak icin atama islemi sondan 
baslanarak yapilir(line 24)
*/