/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:37:34 by rahmoham          #+#    #+#             */
/*   Updated: 2024/12/04 15:15:10 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putstr(char *str,int *ret)
{
	if (!str)
		ft_putstr("(null)", ret);
	else
		while (*str)
		{
			ft_putchar(*str, ret);
			str++;
		}
}
