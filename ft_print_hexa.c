/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:15:58 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/19 14:16:34 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_print_hexa(long int n, char c)
{
	char	*base;

	base = "0123456789abcdef";
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = -n;
	}
	if (n > 16)
		ft_print_hexa(n / 16, 1);
	if (c == 'X')
		ft_putchar_fd(ft_toupper(base[n % 16]),1);
	else
		ft_putchar_fd(base[n % 16], 1);
}
