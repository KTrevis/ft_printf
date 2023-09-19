/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:16:11 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/19 14:16:11 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_putnbr(unsigned int nb)
{
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, 1);
	ft_putchar_fd(nb % 10 + '0', 1);
}
