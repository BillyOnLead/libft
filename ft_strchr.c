/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:20:53 by azari             #+#    #+#             */
/*   Updated: 2022/10/14 15:58:37 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *hay, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(hay))
	{
		if (hay[i] == (char)c)
			return ((char *)&hay[i]);
		i++;
	}
	return (0);
}
// int main()
// {
//         char haystack [] = "tweet mention \0@azari @zmoussam !";
//         //printf("%s\n", strchr(NULL,0));
//         printf("%s\n", ft_strchr(haystack,'\0'));
//         printf("--\n");
//         printf("%s\n", strchr(haystack,'\0'));
// }