/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:06:18 by azari             #+#    #+#             */
/*   Updated: 2022/10/13 11:52:01 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;
	size_t			i;

	i = -1;
	ptr_d = (unsigned char *)dst;
	ptr_s = (unsigned char *)src;
	if ((!ptr_d && !ptr_s) && n > 0)
		return (NULL);
	while (++i < n)
	(*ptr_d++) = (*ptr_s++);
	return (dst);
}
// int main()
// {
//     // char str[12] = "12345";
//     // char str2[12] = "12345";
//     // char str3[12] = "12345";
//     // printf("Original string :%s\n ", str);
//     // // when overlap happens then it just ignore it
//     // memcpy(str + 2, str, 8);
//     // printf("memcpy overlap : %s\n ", str);
//     // //
//     // ft_memcpy(str2 + 2, str2, 10);
//     // printf("ft_memcpy overlap : %s\n ", str2);
//     // // when overlap it start from first position
//     // memmove(str3 + 2, str3, 8);
//     // printf("memmove overlap : %s\n ", str3);
//     // return 0;  
// }