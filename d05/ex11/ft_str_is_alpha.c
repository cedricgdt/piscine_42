/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 17:02:51 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/16 17:02:21 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_str_is_alpha(char *str)
{
	int	j;
	int	i;

	i = 0;
	j = ft_strlen(str);
	while (i < j)
	{
		if (((str[i] < 65) || (str[i] > 90)) &&
			((str[i] < 97) || (str[i] > 122)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
