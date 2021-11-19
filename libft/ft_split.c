/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:49:53 by youskim           #+#    #+#             */
/*   Updated: 2021/11/18 23:12:33 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_count(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			n++;
		i++;
	}
	return (n);
}

char	*cut_str(char const *s, int start, int len)
{
	char	*cut;
	int		i;

	cut = (char *)malloc(sizeof(char) * (len + 1));
	if (cut == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		cut[i] = s[start];
		i++;
		start++;
	}
	cut[i] = '\0';
	return (cut);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		count;
	int		i;
	int		k;
	int		cycle;

	count = check_count(s, c);
	arr = (char **)malloc(sizeof(char *) * (count + 2));
	if (arr == 0)
		return (NULL);
	i = 0;
	k = 0;
	while (i <= count)
	{
		cycle = 0;
		while (s[k] != c)
		{
			k++;
			cycle++;
		}
		arr[i] = cut_str(s, k - cycle, k);
		i++;
	}
	arr[i] = 0;
	return (arr);
}
