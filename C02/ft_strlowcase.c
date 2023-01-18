/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:58:21 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/18 23:04:03 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdbool.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	curr;

	i = 0;
	while (true)
	{
		curr = str[i];
		if (curr == '\0')
			break ;
		if (curr >= 'A' && curr <= 'Z')
			str[i] = curr + 32;
		i++;
	}
	return (str);
}

/*
int		main(void)
{
	char	*str_base;
	char	str_lower[6];
	int		index;

	str_base = "HELl0";
	index = 0;
	while (index < 6)
	{
		str_lower[index] = str_base[index] + 0;
		index++;
	}
	ft_strlowcase(&str_lower[0]);
	printf("should be normal    : %s\n", str_base);
	printf("should be lower case: %s\n", str_lower);
}
*/
