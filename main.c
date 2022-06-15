/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:37:18 by carys             #+#    #+#             */
/*   Updated: 2021/12/14 16:41:18 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf ("c %c\n", 'e');
	ft_printf ("c %c\n", 'e');
	printf ("s %s\n", "example");
	ft_printf ("s %s\n", "example");
	printf ("p %p\n", "e");
	ft_printf ("p %p\n", "e");
	printf ("di %d %i\n", -2147483647, 456);
	ft_printf ("di %d %i\n", -2147483647, 456);
	printf ("u %u\n", 789);
	ft_printf ("u %u\n", 789);
	printf ("x %x\n", 20);
	ft_printf ("x %x\n", 20);
	printf ("X %X\n", 11);
	ft_printf ("X %X\n", 11);
	printf ("%% %d%%\n", 100);
	ft_printf("%% %d%%\n", 100);
	/*printf ("[%10.2s]\n", "toto");
	ft_printf ("[%10.2s]\n", "toto");
	printf ("Magic [%s] is [%10.5d]\n", "number", -42);
	ft_printf ("Magic [%s] is [%10.5d]\n", "number", -42);
	printf ("Hexadecimal for [%.5d] is [%10.5x]\n", -42, 42);
	ft_printf ("Hexadecimal for [%.5d] is [%10.5x]\n", -42, 42);*/
}
