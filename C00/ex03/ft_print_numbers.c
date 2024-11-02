/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:40:47 by vabatist          #+#    #+#             */
/*   Updated: 2024/01/28 09:16:58 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	char	currentnumber;

	currentnumber = '0';
	while (currentnumber <= '9')
	{
		write (1, &currentnumber, 1);
		currentnumber++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
