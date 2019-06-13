/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 12:43:37 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/05 21:00:21 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_transform(int a, int b)
{
	int	ax;
	int	ay;
	int	bx;
	int	by;

	ax = a / 10;
	ax = '0' + ax;
	ay = a % 10;
	ay = '0' + ay;
	bx = b / 10;
	bx = '0' + bx;
	by = b % 10;
	by = '0' + by;
	ft_putchar(ax);
	ft_putchar(ay);
	ft_putchar(' ');
	ft_putchar(bx);
	ft_putchar(by);
	return (0);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_transform(a, b);
			if (a != 98 || b != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
