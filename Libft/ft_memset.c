/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:05:27 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/10 10:14:51 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void	*ft_memset(void *s, int c, size_t n)
{
	size_t x = 0;
	unsigned char *str = (unsigned char *)(s);

	while (x < n)
		str[x++] = (unsigned char)(c);
	return s;

}

int	main()
{
	int str = 0;
	char *ptr = (char *)(&str);

	ft_memset(ptr, 57, 1);
	printf("57     ???  -> %d\n", str);
	memset(ptr + 1, 5, 1);
	printf("1337   ???  -> %d\n", str);
	memset(ptr + 2, 4, 1);
	printf("263481 ???  -> %d\n", str);

}
