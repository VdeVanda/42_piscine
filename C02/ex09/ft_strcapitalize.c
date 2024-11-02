/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:24:25 by vabatist          #+#    #+#             */
/*   Updated: 2024/02/12 16:19:56 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = ft_lowcase(str); 
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < '0')
				str[i] = str[i] - 32;
			if (str[i - 1] > '9' && str[i - 1] < 'A')
				str[i] = str[i] - 32;
			if (str[i - 1] > 'Z' && str[i - 1] < 'a')
				str[i] = str[i] - 32;
			if (str[i - 1] > 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "Ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("upper and lower: %s\n", ft_strcapitalize(str));
	return (0);
}*/
