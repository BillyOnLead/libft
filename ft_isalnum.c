/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:31:06 by azari             #+#    #+#             */
/*   Updated: 2022/10/13 11:41:44 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
// int main()
// {
// 	// int i;
// 	// int j;

// 	// i = isalnum('1');
// 	// printf("%d\n", i);

// 	// j = ft_isalnum ('1');
// 	// printf("%d", j);
// 	// return (0);
// }
