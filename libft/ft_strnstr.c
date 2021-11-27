/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:44:25 by youskim           #+#    #+#             */
/*   Updated: 2021/11/25 13:00:46 by youskim          ###   ########.fr       */
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
	while (i < n && str[i] != '\0')
	{
		j = 0;
		if (str[i] == find[j])
		{
			while (find[j] != '\0' && i + j < n && str[i + j] != '\0')
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
