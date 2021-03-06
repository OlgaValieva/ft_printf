/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:06:26 by carys             #+#    #+#             */
/*   Updated: 2021/12/14 16:04:09 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_x(unsigned long long int i, int *res, const char *str)
{
	char	c;

	if ((i % 16) > 9 && (i % 16) < 16)
	{
		if (*str == 'x')
			c = i % 16 + 87;
		else
			c = i % 16 + 55;
	}
	else
		c = i % 16 + '0';
	*res += 1;
	if (i / 16 != 0)
		ft_put_x(i / 16, res, str);
	write(1, &c, 1);
}
