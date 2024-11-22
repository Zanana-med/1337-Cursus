/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 01:41:27 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/22 01:56:55 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*deleted;

	if (!lst || !del)
		return ;

	current = *lst;
	while (current)
	{
		ft_lstdelone(current, del(current -> content));
		current = current -> next;
	}
	free (lst);
}
