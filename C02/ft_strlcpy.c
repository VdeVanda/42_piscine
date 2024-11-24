/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:37:25 by vabatist          #+#    #+#             */
/*   Updated: 2024/02/12 16:15:41 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[len] != '\0')
		len++;
	i = 0;
	while (src[len] != '\0' && i < size - 1 && size > 0)
	{
		dest[i] = src[len];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[] = "Ola, tudo bem?";
	char src[] = "Tudo";
	unsigned int size = 0;
	printf("lenght of source: %d\n", ft_strlcpy(dest, src, size));
	return (0);
}*/
