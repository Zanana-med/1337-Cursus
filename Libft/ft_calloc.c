/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:24:07 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/17 01:28:00 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ret;

	total = nmemb * size;
	if ((total / size) != nmemb)
		return (NULL);
	ret = malloc (total);
	if (!ret)
		return (NULL);
	ft_bzero(ret, total);
	return (ret);
}
