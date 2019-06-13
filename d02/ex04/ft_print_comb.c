/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 10:14:36 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/06 03:42:29 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_result(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	return (0);
}

int		ft_space(char d, char e)
{
	ft_putchar(d);
	ft_putchar(e);
	return (0);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_result(a, b, c);
				if (a != '7' || b != '8' || c != '9')
					ft_space(',', ' ');
				c++;
			}
			b++;
		}
		a++;
	}
}
