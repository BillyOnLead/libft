/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:39:34 by azari             #+#    #+#             */
/*   Updated: 2022/10/17 14:50:34 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char *s, int c)
{
	int i;
	int count;
	
	i = -1;
	count = 0;
	while (s[++i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			count++;
	}
	return (count);
}

void free_str(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}

char **ft_split(const char *s, char c)
{
	int		i;
	int		j;
	char	**ptr;

	ptr = (char **)malloc(sizeof(char *) * (count(str, c) + 1));
}

int main()
{
	char str[] = "///x/xxxx/xxx/xx//x/////xx//x///";
	printf("%d", count(str, '/'));
}