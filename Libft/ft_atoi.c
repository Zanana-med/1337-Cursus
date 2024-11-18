/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:00:00 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/18 16:46:49 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static void	space_check(const char *s, int *index)
{
	while ((s[*index]) && (((s[*index] >= 9) && (s[*index] <= 13
				|| s[*index] == 32))))
		*index += 1;
}

static void	sign_check(const char c, int *index, int *sign)
{
	if (c == '+' || c == '-')
        {
                if (c == '-')
                        *sign = -1;
                *index += 1;
        }
}

int	ft_atoi(const char *str)
{
	int		sign;
	size_t	res;
	int		index;

	index = 0;
	sign = 1;
	res = 0;
	space_check(str, &index);
	sign_check(str[index], &index, &sign);
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
/*
int main()
{
	printf("-254 : %d | +200 : %d | --215(0) : %d\n", ft_atoi("   -254.36"), ft_atoi("      +200[2500"), ft_atoi(" --215"));
}*/
