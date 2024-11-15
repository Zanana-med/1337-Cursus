/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 07:15:06 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/15 11:49:14 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	dlen_original;
	size_t	index;
	size_t	slen;

	dlen = ft_strlen(dst);
	dlen_original = dlen;
	slen = ft_strlen(src);
	index = 0;
	while (dlen < (size - 1) && src[index])
		dst[dlen++] = src[index++];
	dst[dlen] = '\0';
	return (dlen_original + slen);
}
