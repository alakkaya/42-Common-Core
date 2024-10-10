/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:57:20 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/10 13:30:50 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 0177);
}

// 0 dönen değer neddir ?
int main(){
	int c = 'A';
	
	printf("%d \n",ft_isascii(c));
	printf("%d \n",isascii(c));

}