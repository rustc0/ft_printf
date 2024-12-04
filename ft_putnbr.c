/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:37:13 by rahmoham          #+#    #+#             */
/*   Updated: 2024/12/04 16:56:11 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *ret)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar('-', ret);
		n *= -1;
	}
	nb = n;
	if (nb < 10)
		ft_putchar(nb + '0', ret);
	else
	{
		ft_putnbr(nb / 10, ret);
		ft_putnbr(nb % 10, ret);
	}
}