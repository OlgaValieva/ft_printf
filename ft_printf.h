/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 06:52:59 by carys             #+#    #+#             */
/*   Updated: 2021/12/14 16:03:21 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);

void	ft_put_c(char c, int *res);
void	ft_put_s(char *str, int *res);
void	ft_put_p(unsigned long long int i, int *res);
void	ft_put_d_i(int i, int *res);
void	ft_put_u(unsigned int i, int *res);
void	ft_put_x(unsigned long long int i, int *res, const char *format);

#endif
