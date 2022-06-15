/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:19:48 by carys             #+#    #+#             */
/*   Updated: 2021/12/14 16:41:26 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	percent(const char *format, int *res, va_list ap)
{
	if (*format == 'c')
		ft_put_c(va_arg(ap, int), res);
	else if (*format == 's')
		ft_put_s(va_arg(ap, char *), res);
	else if (*format == 'p')
		ft_put_p(va_arg(ap, unsigned long long int), res);
	else if (*format == 'd' || *format == 'i')
		ft_put_d_i(va_arg(ap, int), res);
	else if (*format == 'u')
		ft_put_u(va_arg(ap, unsigned int), res);
	else if (*format == 'x' || *format == 'X')
		ft_put_x((unsigned int)va_arg(ap, unsigned long long int), res, format);
	else if (*format == '%')
		ft_put_c('%', res);
	else
		ft_put_c(*format, res);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		res;

	if (format == NULL)
		return (0);
	res = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{	
			format++;
			percent (format, &res, ap);
		}
		else
			ft_put_c(*format, &res);
		format++;
	}	
	va_end(ap);
	return (res);
}
