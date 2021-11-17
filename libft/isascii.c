/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:21:43 by youskim           #+#    #+#             */
/*   Updated: 2021/11/16 12:21:45 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("%d\n", ft_isascii(128));
	printf("%d\n\n", isascii(128));
	printf("%d\n", ft_isascii(-1));
	printf("%d\n\n", isascii(-1));
	printf("%d\n", ft_isascii(200));
	printf("%d\n\n", isascii(200));
	return 0;
}
