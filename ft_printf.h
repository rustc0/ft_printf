/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:31:09 by rahmoham          #+#    #+#             */
/*   Updated: 2024/12/04 18:39:00 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
#define FT_PRINTF

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void    ft_putchar(char c, int *ret);
void    ft_putstr(char *str,int *ret);
void    flag_check(va_list args, const char flag, int *ret);
void	ft_putnbr(int n, int *ret);
void    ft_putuns(unsigned int n, int *ret);
void	ft_puthex(unsigned int n, char Xx, int *ret);

#endif
