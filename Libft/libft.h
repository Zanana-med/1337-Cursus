/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:40:13 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/11 07:21:37 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h> // for the size_t type
#include <stdio.h>  // for th main and test (printf ...)
#include <string.h> // for the mem's original tests
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
size_t				strlen(const char *s);
size_t				ft_strlen(const char *s);
void				*ft_memset(void *s, int c, size_t n);
#endif
