/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:28:26 by youskim           #+#    #+#             */
/*   Updated: 2021/11/21 17:12:48 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ch_count(char const *s1, char const *set)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (check_set(s1[i], set) == 0)
			n++;
		i++;
	}
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	int		count;
	int		i;
	int		k;

	count = ch_count(s1, set);
	arr = (char *)malloc(sizeof(char) * (count + 1));
	if (arr == 0)
		return (NULL);
	i = 0;
	k = 0;
	while (k < count && s1[i] != '\0')
	{
		if (check_set(s1[i], set) == 0)
		{
			arr[k] = s1[i];
			k++;
		}
		i++;
	}
	arr[k] = '\0';
	return (arr);
}
