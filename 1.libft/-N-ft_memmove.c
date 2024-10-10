/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:13:04 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/10 16:43:13 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    //YANLIŞ TEKRAR BAK
    size_t i;
    
	i = 0;
    while(i < len)
    {
        ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
        i++;
    }
    return(dst);
}

int main(){
	char src[] = "klnanali";
    char dst[10] = "aliakkaya";
    
	printf("%s",ft_memmove(dst,src,3));
    	printf("%s",memmove(dst,src,3));

}