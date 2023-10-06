#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_putchar_len(char c);
int	ft_putstr_len(char *str);
int	ft_putnbr_len(int n);
int	ft_putaddr_len(void *ptr);
int	ft_puthexa_unsigned_len(uintptr_t n, char c);
int	ft_putnbr_unsigned_len(unsigned int n);
char	ft_uppercase_char(char c);
char	*ft_uppercase_str(char *str);

#endif
