/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaszuba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:25:50 by mkaszuba          #+#    #+#             */
/*   Updated: 2024/03/23 16:25:52 by mkaszuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	h_printf(unsigned int n, char c)
{
	int	len;

	len = 0;
	if (c == 'x' || c == 'X')
	{
		if (n >= 16)
			len += h_printf(n / 16, c);
		if (c == 'x')
			len += c_printf("0123456789abcdef"[n % 16]);
		else if (c == 'X')
			len += c_printf("0123456789ABCDEF"[n % 16]);
	}
	return (len);
}
