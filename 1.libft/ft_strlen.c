/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:18:26 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/13 18:57:16 by aliakkay         ###   ########.fr       */
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

int main(){
	char c[] = "ali ak!";

	printf("%zu \n",ft_strlen(c));
	printf("%lu",strlen(c));

}