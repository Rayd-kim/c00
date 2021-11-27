/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youskim <youskim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:31:04 by youskim           #+#    #+#             */
/*   Updated: 2021/11/25 17:55:38 by youskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	k;
	char	*ptr;
	int		i;

	k = c;
	i = 0;
	ptr = 0;
	while (str[i] != '\0')
	{
		if (str[i] == k)
			ptr = (char *)&str[i];
		i++;
	}
	if (c == 0)
		return ((char *)&str[i]);
	return (ptr);
}
