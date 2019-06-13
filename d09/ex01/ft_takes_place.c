/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:48:09 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/09 21:47:48 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_takes_place(int hour)
{
	int		h;

	h = hour + 1;
	if (hour < 12 && hour > 0)
	{
		printf("THE FOLLOWING TAKES PLACE");
		printf(" BETWEEN %d.00 A.M. AND %d.00 A.M.\n", hour, h);
	}
	if (hour > 12 && hour < 24)
	{
		hour = hour - 12;
		h = h - 12;
		printf("THE FOLLOWING TAKES PLACE");
		printf(" BETWEEN %d.00 P.M. AND %d.00 P.M.\n", hour, h);
	}
	if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 P.M.\n");
	}
	if (hour == 0)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M.\n");
	}
}
