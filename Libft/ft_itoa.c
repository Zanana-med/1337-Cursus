/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:12:11 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/18 21:08:53 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	num_count(int n)
{
	int i;

	i = 0;
	if (n < 0)
		i = 1;
	while(n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int	count;

	if(n == 0)
		return(ft_strdup("0"));
	if(n == -2147483648)
		return(ft_strdup("-2147483648"));
	count = num_count(n);
	ret = malloc(sizeof(char) * (count + 1));
	if(!ret)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		ret[0] = '-';
	}
	ret[count] = '\0';
	while(n)
	{
		ret[--count] = n % 10 + 48;
		n /= 10;
	}
	return (ret);
}
/*
int	main()
{
	for(int i = -2147483648; i < 0; i /= 2)
		{
			printf("%d\t", i);
			char *s = ft_itoa(i);
			printf("%s\n", s );
			free(s);
		}
	for(int i = 2147483647; i > 0; i /= 2)
		{
			printf("%d\t", i);
			char *s = ft_itoa(i);
			printf("%s\n",  s);
			free(s);
		}
	printf("%d\t", 0);
	char *s = ft_itoa(0);
			printf("%s\n", s );
			free(s);
}*/
