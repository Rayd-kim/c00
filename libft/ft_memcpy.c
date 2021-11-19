/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:44:49 by youskim           #+#    #+#             */
/*   Updated: 2021/11/18 23:12:23 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned int			i;
	unsigned char			*a;
	const unsigned char		*b;

	i = 0;
	a = dest;
	b = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
