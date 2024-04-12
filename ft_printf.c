/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:04:47 by mkaszuba          #+#    #+#             */
/*   Updated: 2024/03/21 19:05:19 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	functions_list(va_list args, const char c)
{
	void	*ptr;

	if (c == 'c')
		return (c_printf(va_arg(args, int)));
	if (c == 's')
		return (s_printf(va_arg(args, char *)));
	if (c == 'p')
	{
		ptr = va_arg(args, void *);
		if (!ptr)
			return (s_printf("(nil)"));
		return (p_printf(ptr));
	}
	if (c == 'd' || c == 'i')
		return (d_printf(va_arg(args, int)));
	if (c == 'u')
		return (u_printf(va_arg(args, unsigned int)));
	if (c == 'x' || c == 'X')
		return (h_printf(va_arg(args, unsigned int), c));
	if (c == '%')
		return (c_printf('%'));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	unsigned int	len;
	unsigned int	i;
	va_list			args;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			len += functions_list(args, str[i]);
		}
		else
			len += c_printf(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
