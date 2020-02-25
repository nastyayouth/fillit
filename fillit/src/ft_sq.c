/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sq.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:29:33 by eestell           #+#    #+#             */
/*   Updated: 2020/02/20 01:52:52 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_sq(char *str, int size, int size_array_fig)
{
	char	*sq;
	int		*pos_fig;
	int		size_array_fig_buf;

	size_array_fig_buf = size_array_fig;
	pos_fig = (int*)malloc(sizeof(int) * (size_array_fig + 1));
	make_array_fig(pos_fig, size_array_fig);
	sq = ft_make_sq(size);
	while (ft_sq2(sq, str, pos_fig, size_array_fig_buf) != 1)
	{
		size++;
		free(sq);
		sq = ft_make_sq(size);
	}
	free(sq);
	free(pos_fig);
}
