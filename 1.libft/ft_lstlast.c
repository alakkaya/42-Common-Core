/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:05:38 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/25 18:19:48 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{   
    if(lst == NULL)
        return(NULL);
    while(lst->next != NULL)
        lst = lst ->next;
    return(lst);
}