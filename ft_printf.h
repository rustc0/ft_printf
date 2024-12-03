/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmoham <rahmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:31:09 by rahmoham          #+#    #+#             */
/*   Updated: 2024/12/03 11:23:16 by rahmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
#define FT_PRINTF

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

void    ft_putchar(char c, int *ret);
void    ft_putstr(char *str,int *ret);
void    flag_check(va_list args, char *flag, int *ret);

#endif
