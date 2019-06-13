/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewelly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 11:08:44 by ewelly            #+#    #+#             */
/*   Updated: 2018/08/07 14:16:33 by ewelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int negative;
	int result;

	i = 0;
	negative = 0;
	result = 0;
	while ((str[i] == ' ') || (str[i] == '\r') || (str[i] == '\v')
			|| (str[i] == '\n') || (str[i] == '\t') || (str[i] == '\f'))
		i++;
	if (str[i] == 45)
		negative = 1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10;
		result = result + ((int)str[i] - 48);
		i++;
	}
	if (negative == 1)
		return (-result);
	else
		return (result);
}
