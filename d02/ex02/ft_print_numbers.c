/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 00:12:04 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/05 21:03:26 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	int i;
	int	number;

	i = 1;
	number = '0';
	while (i <= 10)
	{
		i = i + 1;
		ft_putchar(number);
		number++;
	}
}
