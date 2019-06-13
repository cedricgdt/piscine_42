/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrevill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 00:38:06 by tfrevill          #+#    #+#             */
/*   Updated: 2018/08/18 21:39:36 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	rush(int y, int x);

int		main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while ((*argv[1] >= '0') && (*argv[1] <= '9'))
		{
			a = a * 10 + (*argv[1] - '0');
			argv[1]++;
		}
	while ((*argv[2] >= '0') && (*argv[2] <= '9'))
		{
			b = b * 10 + (*argv[2] - '0');
			argv[2]++;
		}
	rush(b, a);
	return (0);
}
