/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:51:54 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/18 23:27:36 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdbool.h>

int		ft_str_is_numeric(char *str)
{
	int		i;
	bool	valid;
	char	curr;

	i = 0;
	valid = true;
	while (true)
	{
		curr = str[i];
		if (curr == '\0')
			break ;
		if (!(curr >= '0' && curr <= '9'))
		{
			valid = false;
			break ;
		}
		i++;
	}
	return (valid);
}

/*
int		main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "123456";
	str_invalid = "123A56";
	printf("should be 1: %d\n", ft_str_is_numeric(str_valid));
	printf("should be 0: %d\n", ft_str_is_numeric(str_invalid));
}
*/
