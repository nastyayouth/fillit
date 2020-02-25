/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sq2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:29:13 by eestell           #+#    #+#             */
/*   Updated: 2020/02/20 03:50:46 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <math.h>

int		len(char *sq)
{
	int		i;

	i = 0;
	while (sq[i] != '\0')
		i++;
	return (i);
}

int		ft_test_sq(char *buf_str_q, char *str_clear, int size)
{
	if (ft_cnt(buf_str_q) == ft_cnt(str_clear))
	{
		ft_print_sq(buf_str_q, size);
	}
	else
		return (0);
	return (1);
}

int		ft_sq2(char *sq, char *str, int *fig, int sz)
{
	int		n;
	int		*buf_fig;
	char	*buf_sq;

	if (sz == -1)
		return (ft_test_sq(sq, str, sqrt(len(sq))));
	n = 0;
	while (sq[n] != '\0')
	{
		if (ft_fit(&str[fig[0]], sq, n, sqrt(len(sq))) == 1)
		{
			buf_sq = copy_array2(sq, sqrt(len(sq)));
			buf_fig = make_buf_array(sz, fig[0], fig);
			buf_sq = ft_pst(&str[fig[0]], buf_sq, n);
			if ((ft_sq2(buf_sq, str, buf_fig, (sz - 1))) == 1)
			{
				free(buf_sq);
				free(buf_fig);
				return (1);
			}
			free(buf_sq);
		}
		n++;
	}
	return (0);
}
