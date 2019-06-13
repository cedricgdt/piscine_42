/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:37:20 by anradix           #+#    #+#             */
/*   Updated: 2018/08/12 17:14:04 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		ft_check_nb_char(int ac, char **av)
{
	int i;

	while (ac > 0)
	{
		i = 0;
		while (av[ac][i])
		{
			if ((av[ac][i] >= '1' && av[ac][i] <= '9') || (av[ac][i] == '.'))
				i++;
			else
				return (0);
		}
		if (i != 9)
			return (0);
		ac--;
	}
	return (i);
}

int		ft_check_line(int ac, char **av)
{
	int i;
	int cmp;

	while (ac >= 1)
	{
		i = 0;
		while (i <= 9)
		{
			cmp = i + 1;
			while (cmp <= 9)
			{
				if (av[ac][i] == av[ac][cmp] && av[ac][cmp] != '.')
					return (0);
				cmp++;
			}
			i++;
		}
		ac--;
	}
	return (1);
}

int		ft_check_col(char **av)
{
	int i;
	int cmp;
	int col;

	col = 0;
	while (col < 9)
	{
		i = 0;
		while (i <= 9)
		{
			cmp = i + 1;
			while (cmp <= 9)
			{
				if (av[i][col] == av[cmp][col] && av[cmp][col] != '.')
					return (0);
				cmp++;
			}
			i++;
		}
		col++;
	}
	return (1);
}

int		ft_check_one_square(int ac, int i, char **av)
{
	int	stop;
	int	cmp;
	int	swap;
	int	line_cmp;

	stop = ac + 2;
	swap = i;
	while (ac <= stop)
	{
		cmp = i + 1;
		line_cmp = ac;
		while (i <= swap + 2)
		{
			while (cmp <= swap + 2)
			{
				if (av[ac][i] == av[line_cmp][cmp] && av[line_cmp][cmp] != '.')
					return (0);
				cmp++;
			}
			if (line_cmp == stop)
			{
				line_cmp = ac;
				i++;
				cmp = i + 1;
			}
			else
			{
				line_cmp++;
				cmp = swap;
			}
		}
		i = swap;
		ac++;
	}
	return (1);
}

int		ft_check_square(int ac, char **av)
{
	int i;

	ac = 1;
	while (ac <= 7)
	{
		i = 0;
		while (i <= 6)
		{
			if (ft_check_one_square(ac, i, av) == 0)
				return (0);
			i = i + 3;
		}
		ac = ac + 3;
	}
	return (1);
}
