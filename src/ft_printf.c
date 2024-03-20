/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:40:51 by aaslan            #+#    #+#             */
/*   Updated: 2024/03/20 05:27:45 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_format(char c, va_list ap)
{
	int	print_length;

	print_length = 0;
	if (c == 'c')
		print_length += ft_print_char(va_arg(ap, int));
	else if (c == 's')
		print_length += ft_print_string(va_arg(ap, char *));
	else if (c == 'p')
		print_length += ft_print_pointer(va_arg(ap, unsigned long));
	else if (c == 'd' || c == 'i')
		print_length += ft_print_integer(va_arg(ap, int));
	else if (c == 'u')
		print_length += ft_print_unsigned_integer(va_arg(ap, unsigned int));
	else if (c == 'x' || c == 'X')
		print_length += ft_print_hexadecimal(va_arg(ap, unsigned int), c);
	else if (c == '%')
		print_length += ft_print_char('%');
	else
	{
		print_length += ft_print_char('%');
		print_length += ft_print_char(c);
	}
	return (print_length);
}

int	ft_printf(const char *format, ...)
{
	int		print_length;
	va_list	ap;

	print_length = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			print_length += ft_print_format(*(format + 1), ap);
			format += 2;
		}
		else
		{
			print_length += ft_print_char(*format);
			format++;
		}
	}
	va_end(ap);
	return (print_length);
}
