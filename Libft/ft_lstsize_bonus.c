/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:09:39 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/21 22:39:06 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
int ft_lstsize(t_list *lst)
{
	int	ret;
	
	if (!lst)
		return (0);
	ret = 0;
	while (lst)
	{
		ret++;
		lst = lst -> next;
	}
	return (ret);
}
/*
int	main()
{
	t_list *head, *current, *go;

	head = ft_lstnew((char*) "Hello\n");
	current = ft_lstnew((char*) "HELLO\n");
	head -> next = current;
	current = ft_lstnew((char*) "HELLO\n");
	head -> next -> next = current;
	go = head;
	while(go)
	{
		printf("%s", (char *)(go -> content));
		go = go -> next;
	}
	printf("\n%d\n",ft_lstsize(head));


}*/
