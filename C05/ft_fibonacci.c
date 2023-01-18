/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:11:24 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/18 23:30:22 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int i)
{
	if (i < 0)
		return (-1);
	if (i == 0)
		return (0);
	if (i == 1)
		return (1);
	return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_fibonacci(8));
}
*/
