/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:39:25 by vabatist          #+#    #+#             */
/*   Updated: 2024/02/01 12:38:35 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') 
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char	lower[] = "vanda";
	char	nonlower[] = "123Aa";
	char	empty[] = "";

	printf("the value of lower is:%d\n", ft_str_is_lowercase(lower));
	printf("the value of nonlower is:%d\n", ft_str_is_lowercase(nonlower));
	printf("the value of empty is:%d\n", ft_str_is_lowercase(empty));
}*/
