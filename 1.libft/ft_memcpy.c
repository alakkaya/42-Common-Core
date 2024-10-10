/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:32:20 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/10 16:20:01 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{   
    //memmove ile farkı? 
    size_t i;
    
    i = 0;
    //overlap varsa 2 bellek alanı çakışırsa undefined davranış
	if (dst == NULL && src == NULL)
		return (NULL);

    while ( i < n)
    {
        ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
        i++;
    }
    return(dst);
}


int main(){
	 char src[] = "kenanali";
    char dst[10] = "aliakkaya";
    
	printf("%s",ft_memcpy(dst,src,3));
}