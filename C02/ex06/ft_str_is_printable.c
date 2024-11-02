/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:22:23 by vabatist          #+#    #+#             */
/*   Updated: 2024/02/01 12:41:07 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') 
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char	printable[] = "VAN DA~";
	char	nonprintable[] = "lê";
	char	empty[] = "";

	printf("the value of printable is:%d\n", ft_str_is_printable(printable));
	printf("the value of nonprintable is:%d\n", ft_str_is_printable(nonprintable));
	printf("the value of empty is:%d\n", ft_str_is_printable(empty));
}*/
