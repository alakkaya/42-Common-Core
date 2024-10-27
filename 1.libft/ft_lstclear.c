/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:05:38 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/27 16:10:29 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void*))
{   
    t_list  *temp;
    
    if(lst == NULL || del == NULL)
        return ;
    while(*lst != NULL)
    {
        temp = (*lst)->next;
        ft_lstdelone(*lst,del);
        *lst = temp;
    }
    *lst = NULL;
}
