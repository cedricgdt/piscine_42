/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 11:00:10 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/23 22:43:47 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*tab;

	tab = NULL;
	k = 0;
	i = 1;
	if (!(tab = (char*)malloc(sizeof(tab) * argc)))
		return (NULL);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			tab[k] = argv[i][j];
			j++;
			k++;
		}
		tab[k] = '\n';
		k++;
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
