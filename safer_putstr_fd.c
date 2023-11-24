/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safer_putstr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:43:07 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/24 10:57:37 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	safer_putstr_fd(char *s, int fd)
{
	if (!s)
		return (write(fd, "(null)", 6));
	else
		return (write(fd, s, ft_strlen(s)));
}
