/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:03:57 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/10 14:57:25 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{	// void* iken doğrudan bytelara erişilemiyor. bu yüzden unsigned char* 'a dönüştürülür.
	size_t	i;

	i = 0;
    while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str[50] = "kenan";   
  
    printf("After memset():  %s", ft_memset(str , '.', 2) );
    return 0; 
} 