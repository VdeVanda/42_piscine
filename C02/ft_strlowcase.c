/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 09:44:43 by vabatist          #+#    #+#             */
/*   Updated: 2024/02/01 13:13:46 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') 
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	nonlow[] = "VANDA";
	char	low[] = "vanda";
	char	empty[] = "";

	printf("the value of nonlow is:%s\n", ft_strlowcase(nonlow));
	printf("the value of low is:%s\n", ft_strlowcase(low));
	printf("the value of empty is:%s\n", ft_strlowcase(empty));
	return (0);
}*/
