#include "ft_printf.h"
#include <stdio.h>

int	ft_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar_len(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr_len(va_arg(args, char *)));
	if (c == 'i' || c == 'd')
		return (ft_putnbr_len(va_arg(args, int)));
	if (c == 'u')
		return (ft_putnbr_unsigned_len(va_arg(args, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_puthexa_len(va_arg(args, int), c));
	if (c == 'p')
		return (ft_putaddr_len(va_arg(args, void *)));
	if (c == '%')
		return (ft_putchar_len('%'));
	return (1);
}

int	ft_printf(const char *str, ...)
{
	int			len;
	va_list	args;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
			len += ft_format(*++str, args);
		else
			len += ft_putchar_len(*str);
		str++;
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	ft_printf("%x\n", -42);
	printf("%x\n", -42);
}
