/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:54:19 by vabatist          #+#    #+#             */
/*   Updated: 2024/02/01 12:42:13 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') 
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	nonupper[] = "arnez arnez";
	char	upper[] = "ARNEZ ARNEZ";
	char	empty[] = "";

	printf("the value of nonupper is:%s\n", ft_strupcase(nonupper));
	printf("the value of upper is:%s\n", ft_strupcase(upper));
	printf("the value of empty is:%s\n", ft_strupcase(empty));
	return (0);
}*/
