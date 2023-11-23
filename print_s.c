/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:12:31 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/22 16:19:46 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(t_printer *printer)
{
	char	*string;
	int		printed_chars;

	string = va_arg(printer->params, char *);
	printed_chars = safer_putstr_fd(string, 1);
	if (printed_chars < 0)
		return (1);
	printer->output_count += printed_chars;
	return (0);
}