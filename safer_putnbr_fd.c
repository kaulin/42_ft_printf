/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safer_putnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:40:52 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/22 16:44:43 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    safer_putnbr_fd(int n, int fd)
{
        char    digit;

        if (n == -2147483648)
        {
                return (safer_putstr_fd("-2147483648", fd));
        }
        if (n < 0)
        {
                return (safer_putchar_fd('-', fd));
                n *= -1;
        }
        if (n > 9)
        {
                ft_putnbr_fd(n / 10, fd);
        }
        digit = n % 10 + '0';
        write(fd, &digit, 1);
}