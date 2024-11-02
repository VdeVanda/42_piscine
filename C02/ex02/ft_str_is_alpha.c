/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:50:49 by vabatist          #+#    #+#             */
/*   Updated: 2024/02/01 16:28:43 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') 
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
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
	char	alpha[] = "anda";
	char	nonalpha[] = "123AA";
	char	empty[] = "";

	printf("the value of alpha is:%d\n", ft_str_is_alpha(alpha));
	printf("the value of nonalpha is:%d\n", ft_str_is_alpha(nonalpha));
	printf("the value of empty is:%d\n", ft_str_is_alpha(empty));
}*/
