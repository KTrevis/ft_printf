/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:15:55 by ketrevis          #+#    #+#             */
/*   Updated: 2023/09/19 14:20:29 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_print_address(void *ptr)
{
	unsigned long	addr;

	addr = (unsigned long)ptr;
	ft_putstr_fd("0x", 1);
	ft_print_unsigned_hexa(addr);
}
