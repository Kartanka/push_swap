/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkonuro <olkonuro@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 10:50:28 by tkartash          #+#    #+#             */
/*   Updated: 2026/07/13 10:05:57 by olkonuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr_uns(unsigned int n, int fd);
int	ft_putnbr_hex_lower(unsigned int n, int fd);
int	ft_putnbr_hex_upper(unsigned int n, int fd);
int	ft_putnbr_p(unsigned long ptr, int fd);
int	ft_putfloat(double n, int fd);

#endif
