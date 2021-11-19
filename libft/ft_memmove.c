/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:22:45 by youskim           #+#    #+#             */
/*   Updated: 2021/11/18 23:25:06 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*ds;
	char			*s;

	ds = (char *)dest;
	s = (char *)src;
	i = 0;
	if (ds <= s)
	{
		while (i < n)
		{
			ds[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			ds[n - 1] = s[n - 1];
			n--;
		}
	}
	return (ds);
}
