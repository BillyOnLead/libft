/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:08:40 by azari             #+#    #+#             */
/*   Updated: 2022/10/12 11:54:42 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// int main()
// {
// 	// int i;
// 	// int j;

// 	// int x;
// 	// int y;

// 	// i = isdigit(57);
// 	// j = isdigit('9');

// 	// x = ft_isdigit(57);
// 	// y = ft_isdigit('9');

// 	// printf("%d\n%d\n%d\n%d", i, j, x, y);

// }