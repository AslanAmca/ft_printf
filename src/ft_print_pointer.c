/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 20:26:15 by aaslan            #+#    #+#             */
/*   Updated: 2024/03/20 05:27:35 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_pointer_hex_len(unsigned long number)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number = number / 16;
		len++;
	}
	return (len);
}

/**
 * @brief Verilen sayısal değeri hexadecimal (16) formatta basar.
 *
 * @param number Basılacak sayı
 * @return int ==> Basılan karakter sayısı
 */
static int	ft_print_pointer_hex(unsigned long number)
{
	int	len;

	len = ft_pointer_hex_len(number);
	if (number <= 9)
		ft_print_char(number + '0');
	else if (number < 16)
		ft_print_char((number - 10) + 'a');
	else
	{
		ft_print_pointer_hex(number / 16);
		ft_print_pointer_hex(number % 16);
	}
	return (len);
}

int	ft_print_pointer(unsigned long number)
{
	int	len;

	len = ft_print_string("0x");
	len += ft_print_pointer_hex(number);
	return (len);
}
