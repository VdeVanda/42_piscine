/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:20:49 by vabatist          #+#    #+#             */
/*   Updated: 2024/02/01 12:35:36 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') 
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	char	numeric[] = "123";
	char	nonnumeric[] = "Vanda12";
	char	empty[] = "";

	printf("the value of numeric is:%d\n", ft_str_is_numeric(numeric));
	printf("the value of nonnumeric is:%d\n", ft_str_is_numeric(nonnumeric));
	printf("the value of empty is:%d\n", ft_str_is_numeric(empty));
}*/
