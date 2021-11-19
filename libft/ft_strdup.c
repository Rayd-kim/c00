/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:42:59 by youskim           #+#    #+#             */
/*   Updated: 2021/11/18 13:13:40 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	int		len;
	char	*arr;

	len = 0;
	while (str[len])
		len++;
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (arr == 0)
		return (NULL);
	len = 0;
	while (str[len])
	{
		arr[len] = str[len];
		len++;
	}
	return (arr);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *str = "";
	char *ptr1 = strdup(str);
	char *ptr2 = ft_strdup(str);
	printf("%s\n", ptr1);
	printf("%s\n", ptr2);
	free(ptr1);
	free(ptr2);
	return 0;
}
*/
