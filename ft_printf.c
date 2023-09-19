/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:54:28 by Diogo-ss          #+#    #+#             */
/*   Updated: 2023/09/19 14:24:08 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static void	ft_format(const char c, va_list args)
{
	if (c == 'i' || c == 'd')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (c == 'u')
		ft_unsigned_putnbr(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		ft_print_hexa(va_arg(args, int), c);
	else if (c == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 'p')
		ft_print_address(va_arg(args, void *));
	else if (c == '%')
		ft_putchar_fd(c, 1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar_fd(str[i], 1);
		else
		{
			ft_format(str[++i], args);
		}
		i++;
	}
	va_end(args);
	return (0);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	unsigned int n = 2147483650;
// 	ft_printf("ceci est un test %% %i %s %c %u \n", 42, "string", 'c', n);
// 	ft_print("%d %x %X %p", 123, -42, 42, (void *)&n)
// }
