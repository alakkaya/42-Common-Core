/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:44:24 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/10 13:30:50 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}


int main(){
	int c = '/';
	printf("%d \n", ft_isalnum(c));
	printf("%d \n", isalnum(c));

}