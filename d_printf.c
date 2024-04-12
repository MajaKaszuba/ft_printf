/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:55:40 by mkaszuba          #+#    #+#             */
/*   Updated: 2024/03/23 14:55:44 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	d_printf(int num)
{
	int	len;

	len = 0;
	if (num == -2147483648)
	{
		c_printf('-');
		c_printf('2');
		num = 147483648;
		len += 2;
	}
	if (num < 0)
	{
		len += c_printf('-');
		num = -num;
	}
	if (num >= 10)
		len += d_printf(num / 10);
	len += c_printf((num % 10) + '0');
	return (len);
}
