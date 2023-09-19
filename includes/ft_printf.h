/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:16:04 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/19 14:16:35 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

int		ft_printf(const char *str, ...);
void	ft_putdecimal(long double n);
void	ft_unsigned_putnbr(unsigned int n);
void	ft_print_hexa(long int n, char c);
void	ft_print_address(void *ptr);
void	ft_print_unsigned_hexa(long unsigned n);

#endif
