/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrevill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 00:28:24 by tfrevill          #+#    #+#             */
/*   Updated: 2018/08/05 22:42:01 by tfrevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_width(int x)
{
	int count;

	ft_putchar('A');
	count = 0;
	while (count < x - 2)
	{
		ft_putchar('B');
		count++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	print_height(int y, int x)
{
	int count;
	int space;

	count = 0;
	while (count < y - 2)
	{
		space = x - 2;
		ft_putchar('B');
		while (space > 0)
		{
			ft_putchar(' ');
			space--;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		count++;
	}
}

void	rush(int y, int x)
{
	if (!(y < 1 || x < 1))
	{
		print_width(x);
		print_height(y, x);
		if (y > 1)
			print_width(x);
	}
}
