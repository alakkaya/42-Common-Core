/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:32:46 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/27 15:58:13 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if(lst == NULL || del == NULL)
        return ;
        
    del(lst->content);
    free(lst);
}