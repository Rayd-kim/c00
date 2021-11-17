/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:22:24 by youskim           #+#    #+#             */
/*   Updated: 2021/11/16 12:50:16 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int n)
{
	unsigned char	a;
	unsigned char	*str;
	int		i;

	a = c;
	str = b;
	i = 0;
	while (i < n)
	{
		str[i] = a;
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	/*
	char b[5];
	char a[5];
	printf("%s\n", b);
	ft_memset(b, '1', sizeof(b));
	printf("%s\n", b);

	printf("%s\n", a);
	memset(a, '1', sizeof(a));
	printf("%s\n", a);
	*/
	int a[5] = {0, 0, 0, 0, 0};
	int b[5] = {0, 0, 0, 0, 0};
	ft_memset(a, 1, 10);
	for (int i = 0; i < 5; i++)
		printf("%d\n", a[i]);
	printf("\n");
	memset(b, 1, 10);
	for (int i = 0; i < 5; i++)
		printf("%d\n", b[i]);
	
	return 0;
}
