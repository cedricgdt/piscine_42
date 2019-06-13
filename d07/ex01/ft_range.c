/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 17:32:55 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/23 22:44:28 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*range;
	int		j;
	int		i;

	range = NULL;
	i = 0;
	j = max - min;
	if (min < max)
	{
		if (!(range = (int*)malloc(sizeof(*range) * j)))
			return (NULL);
		while (i < j)
		{
			range[i] = min;
			min++;
			i++;
		}
	}
	return (range);
}
