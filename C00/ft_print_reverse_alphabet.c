/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:14:19 by vabatist          #+#    #+#             */
/*   Updated: 2024/01/28 09:16:28 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	currentchar;

	currentchar = 'z';
	while (currentchar >= 'a')
	{
		write(1, &currentchar, 1); 
		--currentchar;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}*/
