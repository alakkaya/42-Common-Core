/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:03:10 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/21 16:35:12 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_checkset(char c, char const *set)
{
	size_t i;

	i = 0;

	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

//bazıları boşluklara \n \t falan da kontrole etmiş
char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	size_t len;
	size_t i;

	char *str;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	end = ft_strlen(s1);

	// başındaki set karakterlerini atla
	while (s1[start] && ft_checkset(s1[start], set))
		start++;
	while (end > start && ft_checkset(s1[end - 1], set))
		end--;

	len = end - start;

	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);

	i = 0;
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';

	return (str);
}