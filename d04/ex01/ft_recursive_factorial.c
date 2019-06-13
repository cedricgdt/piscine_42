/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:28:25 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/11 23:24:56 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int	a;

	a = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1 | nb == 0)
		return (1);
	if (nb > 1)
	{
		return (a * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
