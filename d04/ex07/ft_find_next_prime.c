/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:04:20 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/11 18:30:30 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1 || nb == 4)
		return (0);
	else if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	else if (nb > 1)
	{
		while (i != (nb / 2))
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int	a;

	a = ft_is_prime(nb);
	if (a == 1)
	{
		return (nb);
	}
	while (a == 0)
	{
		nb++;
		a = ft_is_prime(nb);
	}
	return (nb);
}
