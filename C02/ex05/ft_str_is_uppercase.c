/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:48:52 by vabatist          #+#    #+#             */
/*   Updated: 2024/02/01 12:39:50 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') 
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	upper[] = "VANDA";
	char	nonupper[] = "123Aa";
	char	empty[] = "";

	printf("the value of upper is:%d\n", ft_str_is_uppercase(upper));
	printf("the value of nonupper is:%d\n", ft_str_is_uppercase(nonupper));
	printf("the value of empty is:%d\n", ft_str_is_uppercase(empty));
}*/
