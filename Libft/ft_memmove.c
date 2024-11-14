/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:08:17 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/14 06:19:14 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dt;
	const char	*sc;
	
	dt = (char *)dest;
	sc = (const char *)src;
	if ((!dt && !sc) || dt == sc)
		return (dest);
	if (dt > sc && (size_t)(dt - sc) < n)
	{
		while(n--)
			dt[n] = sc[n];
		return (dest);
	}
	else
		dt = ft_memcpy(dest, src, n);

	return (dest);

}
int	main()
{
	char	str[6] = "ABCDEF";
	printf("%s|%s", (char *)memmove(str+2, str,4), str);
}
