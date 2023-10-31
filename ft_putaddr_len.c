/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:08:24 by ketrevis          #+#    #+#             */
/*   Updated: 2023/10/31 15:08:36 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_unsigned_len(uintptr_t n, char c)
{
	static int	len;
	char		*base;

	len = 0;
	base = "0123456789abcdef";
	if (n > 16)
	{
		ft_puthexa_unsigned_len(n / 16, c);
	}
	if (c == 'x')
		len += ft_putchar_len(base[n % 16]);
	else
		len += ft_putchar_len(ft_uppercase_char(base[n % 16]));
	return (len);
}

int	ft_putaddr_len(void *ptr)
{
	return (ft_putstr_len("0x") + ft_puthexa_unsigned_len((uintptr_t)ptr, 'x'));
}
