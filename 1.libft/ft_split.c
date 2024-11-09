/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:08:43 by aliakkay          #+#    #+#             */
/*   Updated: 2024/11/09 12:40:16 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_parts(char const *s, char c)
{
	size_t	count;
	size_t	in_part;

	count = 0;
	in_part = 0;
	while (*s)
	{
		if (*s != c && !in_part)
		{
			count++;
			in_part = 1;
		}
		else if (*s == c)
			in_part = 0;
		s++;
	}
	return (count);
}

static void	ft_free(char **result, size_t ridx)
{
	while (ridx > 0)
	{
		ridx--;
		free(result[ridx]);
	}
	free(result);
}

static char	*ft_print_parts(char const *s, char *str, size_t i, size_t plen)
{
	size_t	idx;

	idx = 0;
	while (0 < plen)
	{
		str[idx] = s[i - plen];
		idx++;
		plen--;
	}
	str[idx] = '\0';
	return (str);
}

static char	**ft_split_parts(char const *s, char c, char **result, size_t part)
{
	size_t	i;
	size_t	ridx;
	size_t	plen;

	i = 0;
	ridx = 0;
	while (s[i] && ridx < part)
	{
		while (s[i] && s[i] == c)
			i++;
		plen = 0;
		while (s[i + plen] && s[i + plen] != c)
			plen++;
		result[ridx] = (char *)malloc(sizeof(char) * (plen + 1));
		if (!result[ridx])
		{
			ft_free(result, ridx);
			return (NULL);
		}
		ft_print_parts(s, result[ridx], i + plen, plen);
		ridx++;
		i += plen;
	}
	result[ridx] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	part;
	char	**result;

	if (!s)
		return (NULL);
	part = ft_count_parts(s, c);
	result = (char **)malloc((part + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (part == 0)
	{
		result[0] = NULL;
		return (result);
	}
	if (!ft_split_parts(s, c, result, part))
		return (NULL);
	return (result);
}
