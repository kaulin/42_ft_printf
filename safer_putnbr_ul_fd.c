/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safer_putnbr_ul_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:40:52 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/23 15:36:20 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	safer_putnbr_ul_fd(unsigned long n, int fd)
{
	int	written;
	int	placeholder;

	written = 0;
	if (n >= 10)
	{
		placeholder = safer_putnbr_ul_fd(n / 10, fd);
		if (placeholder < 0)
			return (-1);
		written += placeholder;
	}
	if (safer_putchar_fd(n % 10 + '0', 1) < 0)
		return (-1);
	written++;
	return (written);
}
