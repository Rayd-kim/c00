/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:22:36 by youskim           #+#    #+#             */
/*   Updated: 2021/11/19 20:18:27 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	k;
	size_t			i;

	k = c;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == k)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	
	const int s[6] = {1, 2, 3, 4, 5, 6};
	void *k = memchr(s, 2, 4 * 5);
	void *j = ft_memchr(s, 3, 20);
	printf("%p\n", k);
	printf("%p\n", j);
	
	const char *s = "123456";
	char *k = (char *)memchr(s, '2', 1);
	char *j = (char *)ft_memchr(s, '3', 2);
	printf("%p\n", k);
	printf("%p\n", j);
	return 0;
}
*/
