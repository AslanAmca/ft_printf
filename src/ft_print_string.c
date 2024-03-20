/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:36:19 by aaslan            #+#    #+#             */
/*   Updated: 2022/06/09 19:30:47 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(const char *string)
{
	int	i;

	i = 0;
	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*string != '\0')
	{
		ft_print_char(*string);
		string++;
		i++;
	}
	return (i);
}
