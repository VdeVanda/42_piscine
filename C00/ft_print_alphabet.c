/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:55:57 by vabatist          #+#    #+#             */
/*   Updated: 2024/01/28 09:15:42 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	currentchar;

	currentchar = 'a';
	while (currentchar <= 'z')
	{
		write(1, &currentchar, 1);
		++currentchar;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}*/
