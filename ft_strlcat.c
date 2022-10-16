/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:52:27 by azari             #+#    #+#             */
/*   Updated: 2022/10/16 17:09:01 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((!dst || !src) && dstsize == 0)
		return (0);
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	while (dst[i])
		i++;
	if (dstsize <= dlen)
		return (dstsize + slen);
	while (src[j] && j < dstsize - 1 - dlen)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dlen + slen);
}
// int main()
// {       
//         // char dst1[20] = "VIGIL";
//         // char dst2[20] = "VIGIL";
//         char src1[] = "707";
//         char src2[] = "707";        
//         printf("%zu | ", strlcat(NULL, src1, 5));
//         // printf("%s\n", dst1);
//         // printf("%zu | ", ft_strlcat(NULL, src2, 5));
//         // printf("%s\n", dst2);
// }