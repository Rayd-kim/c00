/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:31:04 by youskim           #+#    #+#             */
/*   Updated: 2021/11/18 13:14:44 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	k;
	char	*ptr;
	int		i;

	k = c;
	i = 0;
	ptr = 0;
	while (str[i] != '\0')
	{
		if (str[i] == k)
			ptr = (char *)&str[i];
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *str = "abcadef";
	int	c = 'a';
	char *ptr1 = strrchr(str, c);
	char *ptr2 = ft_strrchr(str, c);
	printf("%s\n", ptr1);
	printf("%s\n", ptr2);
	return 0;
}
*/
