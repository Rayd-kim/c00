/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:45:49 by youskim           #+#    #+#             */
/*   Updated: 2021/11/17 15:25:49 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	if (find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (i < n)
	{
		j = 0;
		if (str[i] == find[j])
		{
			while (find[j] && i + j < n)
			{
				if (str[i + j] != find[j])
					break ;
				j++;
				if (find[j] == '\0')
					return ((char *)&str[i]);
			}
		}
		i++;
	}
	return (0);
}
