/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:57:10 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/18 23:04:19 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdbool.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	curr;

	i = 0;
	while (true)
	{
		curr = str[i];
		if (curr == '\0')
			break ;
		if (curr >= 'a' && curr <= 'z')
			str[i] = curr - 32;
		i++;
	}
	return (str);
}

/*
int		main(void)
{
	char	*str_base;
	char	str_upper[6];
	int		index;

	str_base = "heLl0";
	index = 0;
	while (index < 6)
	{
		str_upper[index] = str_base[index] + 0;
		index++;
	}
	ft_strupcase(&str_upper[0]);
	printf("should be normal    : %s\n", str_base);
	printf("should be upper case: %s\n", str_upper);
}
*/
