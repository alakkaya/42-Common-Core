/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:55:35 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/25 18:00:30 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_lstsize(t_list *lst)
{
	size_t	counter;
	
	counter = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		counter++;
	}
	return(counter);
}