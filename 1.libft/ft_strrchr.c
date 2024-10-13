/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:50:00 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/13 19:00:37 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	//en sondakini bulmak için sondan başladık.
    int	i;

	i = ft_strlen(s);
	
	while(i > 0)
	{
		if(s[i] == (char)c)
			return((char*)(s+i));
		i--;
	}

	if (c == '\0')
		return ((char *)&s[i]); 

	return NULL; 
}
