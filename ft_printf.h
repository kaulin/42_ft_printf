/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:47:49 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/24 10:51:38 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_printer
{
	va_list		params;
	const char	*source;
	int			output_count;
	int			status;
}	t_printer;

int	ft_printf(const char *source, ...);
int	safer_putchar_fd(char c, int fd);
int	safer_putstr_fd(char *s, int fd);
int	safer_putnbr_fd(int n, int fd);
int	safer_putnbr_ul_fd(unsigned long n, int fd);
int	safer_putnbr_ul_base_fd(unsigned long n, char *base, int fd);
int	print_c(t_printer *printer);
int	print_s(t_printer *printer);
int	print_p(t_printer *printer);
int	print_d(t_printer *printer);
int	print_i(t_printer *printer);
int	print_u(t_printer *printer);
int	print_x(t_printer *printer);

#endif