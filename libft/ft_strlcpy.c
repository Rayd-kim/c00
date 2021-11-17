/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:31:25 by youskim           #+#    #+#             */
/*   Updated: 2021/11/17 13:32:02 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length(char *str)
{
	int	k;

	k = 0;
	while (str[k])
		k++;
	return (k);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length(src));
}
