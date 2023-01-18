/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:56:21 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/18 23:27:40 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdbool.h>

int		ft_str_is_printable(char *str)
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
		if (!(curr >= ' ') || curr == 127)
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

	str_valid = "Hell0";
	str_invalid = "hello\7F";
	printf("should be 1: %d\n", ft_str_is_printable(str_valid));
	printf("should be 0: %d\n", ft_str_is_printable(str_invalid));
}
*/
