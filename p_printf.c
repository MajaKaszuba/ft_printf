/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:33:20 by mkaszuba          #+#    #+#             */
/*   Updated: 2024/03/21 19:33:23 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_print(unsigned long long n)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += hex_print(n / 16);
	len += c_printf("0123456789abcdef"[n % 16]);
	return (len);
}

int	p_printf(void *ptr)
{
	int					len;
	unsigned long long	temp;

	len = 0;
	temp = (unsigned long long)ptr;
	len = s_printf("0x");
	len += hex_print(temp);
	return (len);
}
