/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:41:55 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/18 23:24:01 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 5;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, left %d\n", a, b, div, mod);
}
*/
