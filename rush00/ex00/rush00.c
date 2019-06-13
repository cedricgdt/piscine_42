/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrevill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 00:28:24 by tfrevill          #+#    #+#             */
/*   Updated: 2018/08/05 22:46:19 by tfrevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_width(int w)
{
	int count;

	ft_putchar('o');
	count = 0;
	while (count < w - 2)
	{
		ft_putchar('-');
		count++;
	}
	if (!(w == 1))
		ft_putchar('o');
	ft_putchar('\n');
}

void	print_height(int h, int w)
{
	int count;
	int space;

	count = 0;
	space = w - 2;
	while (count < h - 2)
	{
		ft_putchar('|');
		while (space > 0)
		{
			ft_putchar(' ');
			space--;
		}
		if (w > 1)
			ft_putchar('|');
		ft_putchar('\n');
		count++;
		space = w - 2;
	}
}

void	rush(int y, int x)
{
	if (!(h < 1 || w < 1))
	{
		print_width(x);
		print_height(y, x);
		if (h > 1)
			print_width(x);
	}
}
