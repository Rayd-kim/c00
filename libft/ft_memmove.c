/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:22:45 by youskim           #+#    #+#             */
/*   Updated: 2021/11/29 20:26:23 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*ds;
	unsigned char	*s;

	ds = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = -1;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (ds <= s)
	{
		while (++i < n)
			ds[i] = s[i];
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
