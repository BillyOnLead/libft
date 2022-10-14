/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:04:04 by azari             #+#    #+#             */
/*   Updated: 2022/10/13 11:41:19 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
// int main()
// {       
//         // // char str1[] = "Drakaris vegar !";    
//         // // char str2[] = "Drakaris vegar !";
//         // int t1[]  = {1, 2, 3};
//         // int t2[]  = {1, 2, 3};    
//         // bzero(t1,3*sizeof(int));
//         // ft_bzero(t2,3*sizeof(int));
//         // printf("-%d\n",t1[0]);     
//         // printf("-%d\n",t1[1]);     
//         // printf("-%d\n",t1[2]);     
//         // printf("@--\n");
//         // printf("-%d\n",t2[0]);     
//         // printf("-%d\n",t2[1]);     
//         // printf("-%d\n",t2[2]);     
// }