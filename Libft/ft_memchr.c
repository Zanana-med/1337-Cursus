/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:56:24 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/18 01:00:37 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;
	size_t		index;

	str = (const unsigned char *)s;
	ch  = (unsigned char)c;
	index = 0;
	while (index < n)
		if (*(str + index++) == ch)
			return ((void*)(str + --index));
	return (NULL);
}
//check(ft_memchr(s, 0, 1) == s)
//check(ft_memchr(s, 2, 3) == s + 2);
//check(ft_memchr(s, 6, 6) == NULL);
int main ()
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};

	printf("%s\n", (char*)memchr(s, 0, 1));
}
