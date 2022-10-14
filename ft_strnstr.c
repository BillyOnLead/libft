/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:45:48 by azari             #+#    #+#             */
/*   Updated: 2022/10/13 13:42:29 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!ndl[j])
		return ((char *)hay);
	while (i < len)
	{
		j = 0;
		while (hay[i + j] == ndl[j] && i + j < len)
		{
			if (!ndl[j + 1])
				return ((char *)&hay[i]);
			j++;
		}
		i++;
	}
	return (0);
}
