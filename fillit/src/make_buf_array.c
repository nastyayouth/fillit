/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_buf_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:21:31 by eestell           #+#    #+#             */
/*   Updated: 2020/02/20 03:36:22 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*make_buf_array(int size, int non, int *array_fig_pre)
{
	int		i;
	int		j;
	int		*array_fig;

	i = 0;
	j = 0;
	array_fig = (int*)malloc(sizeof(int) * (size + 1));
	while (i <= (size))
	{
		if (non != array_fig_pre[i])
		{
			array_fig[j] = array_fig_pre[i];
			i++;
			j++;
		}
		else
		{
			i++;
		}
	}
	return (array_fig);
}
