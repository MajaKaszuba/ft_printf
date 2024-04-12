/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:12:59 by mkaszuba          #+#    #+#             */
/*   Updated: 2024/03/23 16:13:02 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		c_printf(char c);
int		d_printf(int num);
int		h_printf(unsigned int n, char c);
int		p_printf(void *ptr);
int		s_printf(char *s);
int		u_printf(unsigned int n);
#endif
