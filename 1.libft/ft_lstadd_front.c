/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:21:24 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/25 17:53:51 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    ft_lstadd_front(t_list **lst, t_list *new)
{
// ** (bir işaretçinin işaretçisi )   
    if(new == NULL)
        return;
    new -> next = *lst;
    *lst = new;
}