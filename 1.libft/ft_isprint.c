/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:05:56 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/10 13:30:50 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
    return (c >= ' ' && c <= '~');
}

int main(){
	int c = '\n';
	
	printf("%d \n",ft_isprint(c));
	printf("%d \n",isprint(c));
	
}