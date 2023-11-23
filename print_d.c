/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:12:31 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/23 10:43:15 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d(t_printer *printer)
{
	int	number;

	number = va_arg(printer->params, int);
	printer->status = safer_putnbr_fd(number, 1);
	if (printer->status < 0)
		return (1);
	printer->output_count += printer->status;
	return (0);
}
