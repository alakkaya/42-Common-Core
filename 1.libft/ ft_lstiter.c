/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_lstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:05:38 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/27 16:17:00 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstiter(t_list *lst, void (*f)(void *))
{   
    if(lst == NULL || f == NULL)
        return;
    while(lst != NULL)
    {
        f(lst->content);
        lst = lst -> next;
    }
}