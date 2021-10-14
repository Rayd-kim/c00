/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimyousung <student.42seoul.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:09:53 by kimyousun         #+#    #+#             */
/*   Updated: 2021/10/14 00:43:51 by kimyousun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	n=1
	a =0;
	while(a <=9)
		ft_putchar(arr[a] +48);

	n = 2
	a = 0;
	b = 0;
	while(a <= 8)
	{
		while(b <= 8)
		{
			ft_putchar(arr[a] + 48);
			ft_putchar(arr[b +1] + 48);
			b++;
		}
		a++;
		b = a;
	}

	}
	n = 3
		while( a <= 7)
			while(b <= 7)
				while(c <= 7)
					ft_putchar(arr[a] + 48);
					ft_putchar(arr[b + 1] + 48);
					ft_putchar(arr[c + 2] + 48);
					c++
				b++;
				b=c;
			a++;
			b=a;
			c=a;
}
