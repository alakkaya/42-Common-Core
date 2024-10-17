/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:36:20 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/17 20:35:53 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{	
	size_t	i;
	
	i = 0;

	while (s[i] != '\0') 
	{
		if (s[i] == (char)c) 
			return ((char *)&s[i]); 
		i++;
	}

	if (c == '\0')
		return ((char *)&s[i]); 

	return NULL; 
}

int main(){ 
	const char *str = "Hello, World!";
	printf("%s",ft_strchr(str,'\0'));
	return 0;
}