/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:01:24 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/12 23:33:33 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	ret;

	ret = 0;
	while (s[ret])
	ret++;
		return (ret);
}

int main()
{
	char str[10];
	printf("%d\n",ft_strlen(str));
}