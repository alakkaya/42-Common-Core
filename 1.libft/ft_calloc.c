/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:08:54 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/17 17:32:37 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


void *ft_calloc(size_t count, size_t size)
{
	size_t total_size;
	void *ptr;

	total_size = count * size;
	ptr = malloc(total_size);

	if (ptr)
		ft_bzero(ptr, total_size);

	return (ptr);
}

//! incele main