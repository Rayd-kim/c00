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

#include "libft.h"

int	check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	first_len(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (check_set(s1[i], set) == 1)
		i++;
	return (i);
}

int	end_len(char const *s1, char const *set)
{
	size_t	k;
	int		count;

	k = ft_strlen(s1);
	count = 0;
	if (k == 0)
		return (count);
	else
	{
		while (check_set(s1[k - 1], set) == 1)
		{
			count++;
			k--;
		}
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*arr;
	int			count;
	int			i;
	size_t		first;
	size_t		end;

	first = first_len(s1, set);
	end = end_len(s1, set);
	if (first == ft_strlen(s1))
		count = 0;
	else
		count = ft_strlen(s1) - first - end;
	arr = (char *)malloc(sizeof(char) * (count + 1));
	if (arr == 0)
		return (NULL);
	i = 0;
	while (i < count)
	{
		arr[i] = s1[first];
		i++;
		first++;
	}
	arr[i] = '\0';
	return (arr);
}
