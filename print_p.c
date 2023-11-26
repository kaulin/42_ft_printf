/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:12:31 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/26 12:28:36 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(t_printer *printer)
{
	unsigned long	pointer;

	pointer = va_arg(printer->params, unsigned long);
	printer->status = safer_putstr("0x");
	if (printer->status < 0)
		return (1);
	printer->output_count += printer->status;
	printer->status = safer_putnbr_ul_base(pointer, "0123456789abcdef");
	if (printer->status < 0)
		return (1);
	printer->output_count += printer->status;
	return (0);
}
