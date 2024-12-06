/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 08:11:20 by rahmoham          #+#    #+#             */
/*   Updated: 2024/12/05 20:06:23 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int	ret;
	va_list args;
	int *len;

	ret = 0;
	len = &ret;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			flag_check(args, *str, len);
		}
		else
			ft_putchar(*str, len);
		str++;
	}
	va_end(args);
	return (ret);
}

void	flag_check(va_list args, const char flag, int *len)
{
	if (flag == 'c')
		ft_putchar((char)va_arg(args, int), len);
	else if (flag == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (flag == 'd' || flag == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (flag == 'u')
		ft_putuns(va_arg(args, int), len);
	else if (flag == 'x' || flag == 'X')
		ft_puthex(va_arg(args, int), flag, len);
	else if (flag == 'p')
		ft_putaddr(va_arg(args, void *), len);
	else
	{
		ft_putchar('%', len);
		ft_putchar(flag, len);
	}
}
