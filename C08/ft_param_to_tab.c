/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 00:21:59 by sschanga          #+#    #+#             */
/*   Updated: 2023/01/19 00:22:59 by sschanga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
		++i;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char				*ft_strdup(char *src)
{
	char *dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	return (dest ? ft_strcpy(dest, src) : dest);
}

struct	t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*tab;
	int			i;
	int			j;

	tab = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	if (tab)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			++j;
		tab[i].size_param = j;
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].tab = ft_split_whitespaces(av[i]);
		++i;
	}
	tab[i].str = NULL;
	return (tab);
}
