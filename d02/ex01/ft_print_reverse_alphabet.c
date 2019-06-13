/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 23:26:10 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/05 20:55:52 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	alphabet;

	i = 1;
	alphabet = 'z';
	while (i <= 26)
	{
		i = i + 1;
		ft_putchar(alphabet);
		alphabet--;
	}
}
