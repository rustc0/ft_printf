/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:37:24 by rahmoham          #+#    #+#             */
/*   Updated: 2024/12/04 18:03:06 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuns(unsigned int n, int *ret)
{
	if (n < 10)
		ft_putchar(n + '0', ret);
	else
	{
		ft_putnbr(n / 10, ret);
		ft_putnbr(n % 10, ret);
	}
}
