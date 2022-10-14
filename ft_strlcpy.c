/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:31:31 by azari             #+#    #+#             */
/*   Updated: 2022/10/14 16:16:29 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if ((!dst || !src) || dstsize <= 0)
		return (ft_strlen(src));
	while (dst[i] && src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main()
// {
// 		char src[] = "coucou";
//         char dest[10]; memset(dest, 'A', 10);
// 		char srcv[] = "coucou";
//         char destv[10]; memset(destv, 'A', 10);
//         // char src[] = "VIGIL";
//         // char dest[] = "707 is me";
//         // char srcv[] = "VIGIL";
//         // char destv[] = "707 is me";
//         printf("%lu\n", strlcpy(dest, src, 2));
//         printf("%s\n", dest);
//         printf("%lu\n", ft_strlcpy(destv, srcv, 2));
//         printf("%s\n", destv);
// }