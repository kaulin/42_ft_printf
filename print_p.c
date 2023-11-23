/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:12:31 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/23 16:13:52 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(t_printer *printer)
{
	unsigned long	pointer;

	pointer = va_arg(printer->params, unsigned long);
	printer->status = safer_putstr_fd("0x", 1);
	if (printer->status < 0)
		return (1);
	printer->output_count += printer->status;
	printer->status = safer_putnbr_ul_base_fd(pointer, "0123456789abcdef", 1);
	if (printer->status < 0)
		return (1);
	printer->output_count += printer->status;
	return (0);
}
