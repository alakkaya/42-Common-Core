/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 21:19:11 by aliakkay          #+#    #+#             */
/*   Updated: 2024/10/14 20:16:34 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi(const char *str)
{
	size_t i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

int main()
{
	char *str = "    ---+1234";
	printf("%d", ft_atoi(str));
}