/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:12:31 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/23 15:43:40 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_u(t_printer *printer)
{
	unsigned long	number;

	number = va_arg(printer->params, unsigned int);
	printer->status = safer_putnbr_ul_fd(number, 1);
	if (printer->status < 0)
		return (1);
	printer->output_count += printer->status;
	return (0);
}
