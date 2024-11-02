/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:05:36 by mserra-p          #+#    #+#             */
/*   Updated: 2024/02/11 21:06:10 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		str_len(char *str);
int		ft_get_unit_line(int file_descriptor, char *numb);
void	rush02(char *numb)
{
	int	len;
	int	file_descriptor;
	int	line;

	len = str_len(numb);
	if (len == 1)
	{
		file_descriptor = open("numbers.dict", O_RDONLY);
		line = ft_get_unit_line(file_descriptor, numb);
		file_descriptor = close(file_descriptor);
	}
}
