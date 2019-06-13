/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 15:09:51 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/10 15:03:14 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;
	int	tour;

	tour = 0;
	i = 0;
	j = 1;
	while (tour < size)
	{
		while (j != size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			i++;
			j++;
		}
		i = 0;
		j = 1;
		tour++;
	}
}
