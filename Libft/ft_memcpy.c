/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 03:08:10 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/11 09:03:45 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				x;

	d = (unsigned char *) dest;
	s = (unsigned const char *) src;
	x = 0;
	while (x < n)
	{
		d[x] = s[x];
		x++;
	}
	return (dest);
}
