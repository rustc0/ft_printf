/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:25:17 by rahmoham          #+#    #+#             */
/*   Updated: 2024/12/05 18:44:44 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putlonghex(unsigned long n, int *ret)
{
	char	*base;

	base = "0123456789abcdef";
		if (n < (unsigned long)16)
		ft_putchar(base[n], ret);
	else
	{
		ft_putlonghex(n / (unsigned long)16, ret);
		ft_putlonghex(n % (unsigned long)16, ret);
	}
}

void	ft_putaddr(void *ptr, int *len)
{
	unsigned long	add;

	add = (unsigned long)ptr;
	if (!add)
	{
		ft_putstr("(nil)", len);
		return ;
	}
	ft_putstr("0x", len);
	ft_putlonghex(add, len);
}
