/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 09:29:26 by anradix           #+#    #+#             */
/*   Updated: 2018/08/12 17:17:36 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <unistd.h>
# include <stdlib.h>

int		ft_check_nb_char(int ac, char **av);
int		ft_check_line(int ac, char **av);
int		ft_check_col(char **av);
int		ft_check_square(int ac, char **av);
int		ft_solver(int ac, char **av);
int		ft_check_general(int ac, char **av);
void	ft_print(int ac, char **av);
#endif
