/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:22:16 by youskim           #+#    #+#             */
/*   Updated: 2021/11/16 12:57:11 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int size)
{
	unsigned int			i;
	unsigned char			*a;
	const unsigned char		*b;

	i = 0;
	a = dest;
	b = src;
	while (i < size)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}

#include <stdio.h>
#include <string.h>

int main()
{
	//const char *src = "abcd";
	//char dest[10] = "123456789";
	int src[] = {1, 2, 3, 4, 5, 6};
	int dest[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	memcpy(dest + 1, src, sizeof(int) *3);
	//ft_memcpy(dest + 1, src, sizeof(int) * 3);
	for (int i = 0; i < 9; i++)
		printf("%d", dest[i]);
	//printf("%s \n", dest);
	return 0;
}
