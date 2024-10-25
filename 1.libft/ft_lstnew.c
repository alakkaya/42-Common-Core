/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:12:50 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/25 17:20:32 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstnew(void *content)
{
    t_list  *node;

	node = (t_list*)malloc(sizeof(t_list));
	if(!node)
		return(NULL);
		
	node -> content = content;
	node -> next= NULL;
	return(node);
}
