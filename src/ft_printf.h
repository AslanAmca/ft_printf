/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:41:17 by aaslan            #+#    #+#             */
/*   Updated: 2024/03/20 05:28:19 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_print_char(int c);
int	ft_print_string(const char *string);
int	ft_print_pointer(unsigned long number);
int	ft_print_integer(int number);
int	ft_print_unsigned_integer(unsigned int number);
int	ft_print_hexadecimal(unsigned int number, char c);
int	ft_printf(const char *format, ...);

#endif
