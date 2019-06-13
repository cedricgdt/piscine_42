/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgardian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:15:41 by cgardian          #+#    #+#             */
/*   Updated: 2018/08/17 14:21:01 by cgardian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] || s2[i]) != '\0')
		i++;
	if ((s1[i] > s2[i]) != n)
		return (s1[i] - s2[i]);
	if ((s2[i] > s1[i]) != n)
		return (s1[i] - s2[i]);
	return (0);
}