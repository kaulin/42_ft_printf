/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:12:31 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/23 10:54:06 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(t_printer *printer)
{
	char	*string;

	string = va_arg(printer->params, char *);
	printer->status = safer_putstr_fd(string, 1);
	if (printer->status < 0)
		return (1);
	printer->output_count += printer->status;
	return (0);
}
