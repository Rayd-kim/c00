/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:45:14 by youskim           #+#    #+#             */
/*   Updated: 2021/11/21 17:27:54 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	k;

	i = 0;
	k = c;
	while (str[i] != '\0')
	{
		if (str[i] == k)
		{
			return ((char *)&str[i]);
		}
		else
			i++;
	}
	if (c == 0)
		return ((char *)&str[i]);
	return (0);
}
