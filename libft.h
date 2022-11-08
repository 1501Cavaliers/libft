/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:57:35 by fserpe            #+#    #+#             */
/*   Updated: 2022/11/08 13:19:41 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_strlen(char *str);

void	*ft_memset(void *s, int c, int n);

void	*ft_bzero(void *s, int n);

void	*ft_memcpy(void *dest, const void *src, int n);

void	*ft_memmove(void *dest, void *src, int n);

#endif
