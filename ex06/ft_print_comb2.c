/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimyousung <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:26:24 by kimyousun         #+#    #+#             */
/*   Updated: 2021/10/13 14:27:07 by kimyousun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + 48);
			ft_putchar(a % 10 + 48);
			ft_putchar(' ');
			ft_putchar(b / 10 + 48);
			ft_putchar(b % 10 + 48);
			ft_putchar(',');
			ft_putchar(' ');
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
