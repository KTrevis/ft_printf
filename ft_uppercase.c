#include "ft_printf.h"
char	ft_uppercase_char(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_uppercase_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_uppercase_char(str[i]);
		i++;
	}
	return (str);
}
