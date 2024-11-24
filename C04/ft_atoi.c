/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:40:57 by vabatist          #+#    #+#             */
/*   Updated: 2024/02/07 14:56:20 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nbr;
	int	i;
	int	sign;

	nbr = 0;
	i = 0;
	sign = 1;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i] >= '0' && str[i] <= '9')
			nbr = (nbr * 10) + str[i] - '0';
		i++;
	}
	return (nbr * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("ascii to integer: %d\n", ft_atoi("    --+++123a2"));
	return (0);
}*/
