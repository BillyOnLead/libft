/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:30:48 by azari             #+#    #+#             */
/*   Updated: 2022/10/13 11:53:48 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;

	if (src < dst)
	{
		dp = dst + n - 1;
		sp = src + n - 1;
		n++;
		while (--n > 0)
			*(dp--) = *(sp--);
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
// int main()
// {
//      char str[11] = "12345";
//     char str2[11] = "12345";
//     char str3[11] = "12345";
//     printf("Original string :%s\n ", str);
//     ft_memmove(str2 + 2, str2, 8);
//     printf("ft_memmove overlap : %s\n ", str2);
//     // when overlap it start from first position
//     memmove(str3 + 2, str3, 8);
//     printf("memmove overlap : %s\n ", str3);
// }