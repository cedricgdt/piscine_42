/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 09:30:33 by anradix           #+#    #+#             */
/*   Updated: 2018/08/12 16:34:27 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		ft_check_general(int ac, char **av)
{
	if (ac != 9)
		return (0);
	if (ft_check_nb_char(ac, av) != 9)
		return (0);
	if (ft_check_line(ac, av) != 1)
		return (0);
	if (ft_check_col(av) != 1)
		return (0);
	if (ft_check_square(ac, av) != 1)
		return (0);
	return (1);
}

int		main(int ac, char **av)
{
	if (ft_check_general(ac - 1, av) != 1)
		return (0);
	if (ft_solver(ac - 1, av) != 1)
		return (0);
	ft_print(ac - 1, av);
	return (0);
}
