/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:35:06 by youskim           #+#    #+#             */
/*   Updated: 2021/11/18 13:18:08 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;
	int				sign;
	char			c;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		num = -n;
	}
	else
		num = n;
	if (sign == 1)
		write (fd, "-", 1);
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		c = num % 10 + '0';
		write (fd, &c, 1);
	}
	else
	{
		c = num % 10 + '0';
		write (fd, &c, 1);
	}
}
/*
int main()
{
	ft_putnbr_fd(0, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(-1, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(10, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(-10, 1);
	write (1, "\n", 1);
	return 0;
}
*/
