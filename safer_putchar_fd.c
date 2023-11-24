/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safer_putchar_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:34:53 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/24 10:57:22 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	safer_putchar_fd(char c, int fd)
{
	return (write(fd, &c, sizeof(c)));
}
