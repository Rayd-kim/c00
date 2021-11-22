/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:45:05 by youskim           #+#    #+#             */
/*   Updated: 2021/11/21 21:25:16 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*str;
	size_t			i;

	a = c;
	str = b;
	i = 0;
	while (i < n)
	{
		str[i] = a;
		i++;
	}
	return (str);
}
