/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:00:00 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/18 12:03:43 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>

static void	space_check(const char *s, int *index)
{
	while (s[*index] && ((s[*index] >= 9 && s[*index] <= 13)
                        || s[*index] == 32))
		*index += 1;
}

int	ft_atoi(const char *str)
{
	int		sign;
	size_t	res;
	int		index;

	index = 0;
	sign = 1;
	res = 0;
	//while (str[index] && ((str[index] >= 9 && str[index] <= 13)
	//		|| str[index] == 32))
	//	index++;
	space_check(str, &index);
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] && (str[index] >= 48 && str[index] <= 57))
	{
		if (res > LLONG_MAX)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		res = res * 10 + (str[index] - 48);
		index++;
	}
	return (res * sign);
}
