/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_write.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:01:28 by mserra-p          #+#    #+#             */
/*   Updated: 2024/02/11 20:59:53 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int	ft_get_unit_line(int file_descriptor, char *numb)
{
	char	buffer[1024];
	int		i;
	int		return_code;
	int		line_counter;

	i = 0;
	line_counter = 0;
	return_code = read(file_descriptor, buffer, 1024);
	while (i < return_code)
	{
		if (buffer[i] == '\n')
			line_counter++;
		if (buffer[i] == numb[0])
		{
			buffer[i] -= 48;
			ft_putstr("Number found at line ");
			ft_putchar(buffer[i]);
			ft_putstr("\n");
			return (line_counter);
		}
		i++;
	}
	(void)buffer;
	return (-1);
}

char	*ft_get_word_from_line(char *buffer, int index)
{
	int	end_of_line;

	end_of_line = index;
	while (buffer[end_of_line] != '\n')
	{
		end_of_line++;
	}
	return (ft_get_word(buffer, index, end_of_line));
}
