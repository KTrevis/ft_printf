#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

static int	hex_len(int n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		n /= 16;
		len++;
	}
	return (len);
}

static int	ft_print_leading_f(char *str, char c)
{
	int	to_print;
	int	i;

	to_print = 0;
	i = 0;
	if (c == 'x')
		c = 'f';
	else
		c = 'F';
	while (str[to_print])
		to_print++;
	to_print = 8 - to_print;
	while (i < to_print)
	{
		ft_putchar_len(c);
		i++;
	}
	return (i + 1);
}

int	ft_puthexa_len(int n, char c)
{
	char	*str;
	char	*base;
	int		len;

	if (n < 0)
	{
		n = (n * -1) - 1;
		base = "fedcba9876543120";
	}
	else
		base = "0123456789abcdef";
	len = hex_len(n);
	str = malloc((len + 1) * sizeof(char));
	str[len--] = '\0';
	while (n > 0)
	{
		str[len--] = base[n % 16];
		n /= 16;
	}
	if (c == 'X')
		ft_uppercase_str(str);
	if (*base == 'f')
		len += ft_print_leading_f(str, c);
	len += ft_putstr_len(str);
	return (len);
}
