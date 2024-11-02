/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:01:03 by mserra-p          #+#    #+#             */
/*   Updated: 2024/02/11 21:38:56 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef FT_PRINT_H
# define FT_PRINT_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		str_len(char *str);
char	*ft_get_word(char *str, int begin, int end);
char	*ft_split(char *str, int len);
int		ft_get_unit_line(int file_descriptor, char *numb);
char	*ft_get_word_from_line(char *buffer, int index);
#endif

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_get_word(char *str, int begin, int end)
{
	char	*new_word;
	int		i;

	i = 0;
	new_word = (char *)malloc(end - begin + 1);
	while (begin < end)
	{
		new_word[i] = str[begin];
		begin++;
		i++;
	}
	new_word[end] = '\0';
	return (new_word);
}

char	*ft_split(char *str, int len)
{
	int		index;
	int		begin_word;
	int		end_word;
	char	*new_word;

	printf("\n");
	index = 0;
	begin_word = 0;
	end_word = 0;
	while (str[index])
	{
		if (str[index] == ' ')
		{
			begin_word = index + 1;
			break ;
		}
		index++;
	}
	while (str[index] != '\n')
	{
		index++;
	}
	if (index == 0)
	{
		return ("\0");
	}
	new_word = ft_get_word(str, begin_word, index);
	ft_putstr(new_word);
	return (new_word);
}

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
			ft_putstr("Number found at line ");
			ft_putchar(buffer[i]);
			ft_putstr("\n");
			ft_get_word_from_line(buffer, i);
			return (line_counter);
		}
		i++;
	}
	(void)buffer;
	return (-1);
}

char	*ft_get_word_from_line(char *buffer, int index)
{
	int		end_of_line;
	char	*str;

	end_of_line = index;
	while (buffer[end_of_line] != '\n')
	{
		end_of_line++;
	}
	ft_get_word(buffer, index, end_of_line);
	str = ft_split(ft_get_word(buffer, index, end_of_line), end_of_line
			- index);
	return (ft_get_word(buffer, index, end_of_line));
}
