/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaiffi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 17:21:18 by mdaiffi           #+#    #+#             */
/*   Updated: 2018/08/18 21:48:37 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int		ft_atoi(char *str)
{
	int i;
	int nb;

	nb = 0;
	i = 0;
	while (str[i])
		nb = nb * 10 + (str[i++] - '0');
	return (nb);
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 3)
		return (0);
	a = ft_atoi(argv[2]);
	b = ft_atoi(argv[1]);
	rush(a, b);
	return (0);
}
