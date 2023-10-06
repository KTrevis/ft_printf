#include "ft_printf.h"
#include <stdio.h>

int	ft_puthexa_unsigned_len(uintptr_t n, char c)
{
	static int	len;
	char				*base;

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
