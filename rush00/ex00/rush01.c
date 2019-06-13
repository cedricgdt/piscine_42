/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrevill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 00:28:24 by tfrevill          #+#    #+#             */
/*   Updated: 2018/08/05 22:47:48 by tfrevill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_width(int w, int mode)
{
	int count;

	if (mode == 0)
		ft_putchar('/');
	else
		ft_putchar('\\');
	count = 0;
	while (count < w - 2)
	{
		ft_putchar('-');
		count++;
	}
	if (!(w == 1))
	{
		if (mode == 0)
			ft_putchar('\\');
		else
			ft_putchar('/');
	}
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
	if (!(y < 1 || x < 1))
	{
		print_width(x, 0);
		print_height(y, x);
		if (y > 1)
			print_width(x, 1);
	}
}
