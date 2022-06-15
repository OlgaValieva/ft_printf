/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:05:19 by carys             #+#    #+#             */
/*   Updated: 2021/12/14 15:54:24 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_pp(unsigned long long int i, int *res)
{
	char	c;

	if ((i % 16) > 9 && (i % 16) < 16)
		c = (i % 16) + 87;
	else
		c = (i % 16) + '0';
	*res += 1;
	if (i / 16 != 0)
		ft_put_pp(i / 16, res);
	write(1, &c, 1);
}

void	ft_put_p(unsigned long long int i, int *res)
{
	write(1, "0x", 2);
	*res += 2;
	ft_put_pp(i, res);
}
