/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:53:55 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/18 23:02:15 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

/*
int	main(void)
{
	char *str;

	str = "Hello ";
	printf("c  : %lu\n", strlen(str));
	printf("ft : %d\n", ft_strlen(str));
}
*/
