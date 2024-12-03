/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 08:11:20 by rahmoham          #+#    #+#             */
/*   Updated: 2024/12/03 11:22:58 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *str, ...)
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
			flag_check(args, str, len);
		}
		else
			ft_putchar(*str, len);
		str++;
	}
	return (ret);
}

void	flag_check(va_list args, char *flag, int *len)
{
	if (*flag == 'c')
		ft_putchar((char)va_arg(args, int), len);
	else if (*flag == 's')
		ft_putstr(va_arg(args, char *), len);
}
int main(void)
{
	ft_printf("hello\n%s", "world!");
}