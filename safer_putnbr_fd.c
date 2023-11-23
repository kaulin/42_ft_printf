/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safer_putnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:40:52 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/23 15:36:48 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	safer_putnbr_fd(int n, int fd)
{
	int	written;
	int	placeholder;

	written = 0;
	if (n == -2147483648)
		return (safer_putstr_fd("-2147483648", fd));
	if (n < 0)
	{
		if (safer_putchar_fd('-', fd) < 0)
			return (-1);
		n *= -1;
		written++;
	}
	if (n >= 10)
	{
		placeholder = safer_putnbr_fd(n / 10, fd);
		if (placeholder < 0)
			return (-1);
		written += placeholder;
	}
	placeholder = n % 10 + '0';
	if (safer_putchar_fd(placeholder, 1) < 0)
		return (-1);
	written++;
	return (written);
}
