/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 16:13:19 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/05 20:55:24 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int		i;
	char	alphabet;

	i = 1;
	alphabet = 97;
	while (i <= 26)
	{
		i = i + 1;
		ft_putchar(alphabet);
		alphabet++;
	}
}
