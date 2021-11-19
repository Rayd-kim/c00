/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:31:25 by youskim           #+#    #+#             */
/*   Updated: 2021/11/19 12:42:59 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	length(const char *str)
{
	size_t	k;

	k = 0;
	while (str[k])
		k++;
	return (k);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (length(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length(src));
}

#include <stdio.h>

int	main()
{
	char dest[10] = "012345678\0";
	const char *src = "abcdefghijklmn";
	printf("%s\n", dest);
	size_t k = ft_strlcpy(dest, src, 12);
	printf("%zu\n", k);
	//strlcpy(dest, src, 5);
	printf("%s\n", dest);
	return 0;
}