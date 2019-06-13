/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 16:37:48 by anradix           #+#    #+#             */
/*   Updated: 2018/08/12 17:22:11 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		nb_point;
int		i;

int 	ft_re_solver(char **av, int *line, int *col, char nb)
{
	while (i <= nb_point)
	{
		av[col[i]][line[i]] = nb;
		if (ft_check_general(9, av) == 1)
		{
			i++;
			nb = '1';
		}
		else if ((ft_check_general(9, av) == 0) && nb <= '9')
			nb++;
		else
		{
			while (av[col[i]][line[i]] == '9')
			{
				av[col[i]][line[i]] = '.';
				i--;
			}
			nb = av[col[i]][line[i]];
			nb++;
		}
	}
	return (0);
}

int		ft_generate(char **av, int *line, int *col)
{
	int j;
	int k;

	j = 1;
	k = 0;
	while (j <= 9)
	{
		i = 0;
		while (av[j][i])
		{
			if (av[j][i] == '.')
			{
				col[k] = j;
				line[k] = i;
				k++;
			}
			i++;
		}
		j++;
	}
	i = 0;
	if ((ft_re_solver(av, line, col, '1')) == 1)
		return (0);
	return (1);
}

int 	ft_solver(int ac, char **av)
{
	int	*line;
	int	*col;

	nb_point = 0;
	while (ac > 0)
	{
		i = 0;
		while (av[ac][i])
		{
			if (av[ac][i] == '.')
				nb_point++;
			i++;
		}
		ac--;
	}
	if (!(line = malloc(sizeof(int) * (nb_point))))
		return (0);
	if (!(col = malloc(sizeof(int) * (nb_point))))
		return (0);
	if (ft_generate(av, line, col) == 0)
		return (0);
	return (1);
}
