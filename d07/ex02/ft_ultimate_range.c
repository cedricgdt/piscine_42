/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 16:03:07 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/23 22:44:03 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		j;
	int		i;
	int		*tab;

	i = 0;
	tab = 0;
	j = max - min;
	if (min >= max)
		return (0);
	if (min < max)
	{
		if (!(tab = (int*)malloc(sizeof(int) * j)))
			return (0);
		while (i < j)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	*range = tab;
	return (j);
}
