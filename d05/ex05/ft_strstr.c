/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:47:02 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/17 14:12:17 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if ((to_find[0] == str[i + j]) && (to_find[0] != '\0'))
		{
			while (to_find[j] == str[i + j])
			{
				j++;
			}
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
