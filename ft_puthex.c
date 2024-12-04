/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:11:37 by rahmoham          #+#    #+#             */
/*   Updated: 2024/12/04 18:34:57 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, char Xx, int *ret)
{
	char	*base;

	if (Xx == 'x')
		base = "0123456789abcdef";
	if (Xx == 'X')
		base = "0123456789ABCDEF";
	if (n < (unsigned int)16)
		ft_putchar(base[n], ret);
	else
	{
		ft_puthex(n / (unsigned int)16, Xx, ret);
		ft_puthex(n % (unsigned int)16, Xx, ret);
	}
}
