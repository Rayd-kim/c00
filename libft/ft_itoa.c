/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:14:15 by youskim           #+#    #+#             */
/*   Updated: 2021/11/17 17:34:40 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int			count;
	int			sign;
	long int	num1;
	long int	num2;
	char		*arr;
	int			i;

	count = 0;
	sign = 0;
	if (n == 0)
		count = 1;
	if (n < 0)
	{
		sign = 1;
		num1 = -n;
	}
	num1 = n;
	num2 = num1;
	while (num2 % 10 > 0)
	{
		count++;
		num2 = num2 / 10;
	}
	arr = (char *)malloc(sizeof(char) * (count + sign + 1));
	if (arr == 0)
		return (NULL);
	i = 1;
	while (i < count)
	{
		arr[count - i] = num1 % 10 + '0';
		num1 = num1 / 10;
		i++;
	}
	arr[count] = '\0';
	return (arr);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(1));
	//printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(0));
	//printf("%s\n", ft_itoa(-2147483648));
	return 0;
}

