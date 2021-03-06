/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:05:58 by carys             #+#    #+#             */
/*   Updated: 2021/12/01 14:30:28 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_u(unsigned int i, int *res)
{
	char	c;

	c = i % 10 + '0';
	*res += 1;
	if (i / 10 != 0)
		ft_put_u(i / 10, res);
	write(1, &c, 1);
}
