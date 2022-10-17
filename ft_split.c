/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:39:34 by azari             #+#    #+#             */
/*   Updated: 2022/10/17 10:24:58 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char const *s, int c)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while (s[++i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			count++;
	}
	return (count);
}

char **ft_split(const char *s, char c)
{
	int		i;
	int		j;
	char	**ptr;

	
}