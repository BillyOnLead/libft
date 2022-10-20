/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:25:49 by azari             #+#    #+#             */
/*   Updated: 2022/10/20 10:55:55 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = -1;
	ptr = (unsigned char *)str;
	while (++i < len)
		*ptr++ = (unsigned char)c;
	return (str);
}
