/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:40:20 by vabatist          #+#    #+#             */
/*   Updated: 2024/02/10 12:47:44 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	positive;

	positive = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		positive = -1 * nb;
	}
	else
	{
		positive = nb;
	}
	if (positive >= 10)
	{
		ft_putnbr(positive / 10);
		positive = positive % 10;
	}
	if (positive < 10)
	{
		ft_putchar(positive + '0');
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(0);
	return (0);
}*/
