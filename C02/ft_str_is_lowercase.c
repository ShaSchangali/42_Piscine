/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:53:38 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/18 23:27:32 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdbool.h>

int		ft_str_is_lowercase(char *str)
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
		if (!(curr >= 'a' && curr <= 'z'))
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

	str_valid = "hello";
	str_invalid = "hellO";
	printf("should be 1: %d\n", ft_str_is_lowercase(str_valid));
	printf("should be 0: %d\n", ft_str_is_lowercase(str_invalid));
}
*/
