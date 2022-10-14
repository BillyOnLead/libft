/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:44:20 by azari             #+#    #+#             */
/*   Updated: 2022/10/13 12:13:59 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
// int main()
// {
//         // char str[] = "";
//         // int i;
//         // int j;
//         // i = ft_strlen(str);
//         // j = strlen(str);
//         // printf("%d\n%d", i, j);       
// }