/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main-J05.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 23:53:38 by kibotrel          #+#    #+#             */
/*   Updated: 2018/07/10 00:35:28 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
 
void            ft_putstr(char *str);
void            ft_putnbr(int nb);
int             ft_atoi(char *str);
int             ft_strcmp(char *s1, char *s2);
int             ft_strncmp(char *s1, char *s2, unsigned int n);
int             ft_str_is_alpha(char *str);
int             ft_str_is_numeric(char *str);
int             ft_str_is_lowercase(char *str);
int             ft_str_is_uppercase(char *str);
int             ft_str_is_printable(char *str);
char            *ft_strcpy(char *dest, char *src);
char            *ft_strncpy(char *dest, char *src, unsigned int n);
char            *ft_strstr(char *str, char *to_find);
char            *ft_strupcase(char *str);
char            *ft_strlowcase(char *str);
char            *ft_strcapitalize(char *str);
char            *ft_strcat(char *dest, char *src);
char            *ft_strncat(char *dest, char *src, int nb);
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);
 
int     main(int argc, char **argv)
{
    (void)argc;
// ------[Ex00]------
//  ft_putstr(argv[1]);
// ------[Ex01]------
//  ft_putnbr(atoi(argv[1]));
//  -----[Ex02]------
//  printf(%d, ft_atoi(argv[1]));
// ------[Ex03]------
//  printf(%s, ft_strcpy(argv[1], argv[2]));
// ------[Ex04]------
//  printf(%s, ft_strncpy(argv[1], argv[2], atoi(argv[3])));
// ------[Ex05]------
//  printf(%s, ft_strstr(argv[1], argv[2]));
// ------[Ex06]------
//  printf(%d, ft_strcmp(argv[1], argv[2]));
// ------[Ex07]------
//  printf(%d, ft_strncmp(argv[1], argv[2], atoi(argv[3])));
// ------[Ex08]------
//  printf(%s, ft_strupcase(argv[1]));
// ------[Ex09]-------
//  printf(%s, ft_strlowcase(argv[1]));
// ------[Ex10]-------
//  printf(%s, ft_strcapitalize(argv[1]));
// ------[Ex11]------
//  printf(%d, ft_str_is_alpha(argv[1]));
// ------[Ex12]------
//  printf(%d, ft_str_is_numeric(argv[1]));
// ------[Ex13]------
//  printf(%d, ft_str_is_lowercase(argv[1]));
// ------[Ex14]------
//  printf(%d, ft_str_is_uppercase(argv[1]));
// ------[Ex15]------
//  printf(%d, ft_str_is_printable(argv[1]));
// ------[Ex16]------
//  printf(%s, ft_strcat(argv[1], argv[2]));
// ------[Ex17]------
//  printf(%s, ft_strncat(argv[1], argv[2], atoi(argv[3])));
// ------[Ex18]------
//  printf(%un%lu, ft_strlcat(argv[1], argv[2], atoi(argv[3])), strlcat(argv[4], argv[5], atoi(argv[6]))) ;
// ------[Ex19]------
//  printf(%d, ft_strlcpy(argv[1], argv[2], atoi(argv[3])));
    return (0);
}
