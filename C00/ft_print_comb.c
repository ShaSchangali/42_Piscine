/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:31:58 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/18 23:26:16 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(char a, char b, char c, bool last)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;
	bool last;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				last = !(a == '7' && b == '8' && c == '9');
				ft_write_comb(a, b, c, last);
				c++;
			}
			b++;
		}
		a++;
	}
}

/* 
int		main(void)
{
	ft_print_comb();
}
*/
