/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 06:34:22 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/09 06:49:22 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	isdigit(int c)
{
	if (c > 47 && c < 58)
		return (c);
	else
		return (0);
}