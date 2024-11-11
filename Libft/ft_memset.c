/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:05:27 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/11 01:52:51 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*str;

	str = (unsigned char *)(s);
	x = 0;
	while (x < n)
		str[x++] = (unsigned char)(c);
	return (s);
}
