/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_print_hexa.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:16:09 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/19 14:16:35 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_print_unsigned_hexa(long unsigned n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n > 16)
		ft_print_hexa(n / 16, 1);
	ft_putchar_fd(base[n % 16], 1);
}
