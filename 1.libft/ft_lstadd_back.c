/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:32:46 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/25 18:50:37 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;

    if (*lst == NULL)
        *lst = new;
    else
    {
        ptr = *lst;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = new;
    }
}
