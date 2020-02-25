/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:59:06 by eestell           #+#    #+#             */
/*   Updated: 2020/02/17 05:51:14 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>

int		ft_test_figure(char *str);
int		ft_test_symbols(char *str);
int		ft_test_file(char *str);
int		*copy_array(int *pos_fig, int size_ar);
char	*copy_array2(char *pos_fig, int size_ar);
void	make_array_fig(int *array_fig, int size);
int		*make_buf_array(int size, int non, int *array_fig_pre);
int		ft_cnt(char *str);
int		ft_fit(char *str, char *str_sq, int n, int size);
void	ft_print_sq(char *sq, int n);
char	*ft_pst(char *str, char *str_sq, int n);
char	*ft_make_sq(int n);
int		ft_sq2(char *sq, char *str_clear, int *pos_fig, int size_ar);
void	ft_sq(char *str, int size, int size_array_fig);

#endif
