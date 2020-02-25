/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_array_fig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:21:13 by eestell           #+#    #+#             */
/*   Updated: 2020/02/20 01:03:27 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	make_array_fig(int *array_fig, int size)
{
	int		i;
	int		j;
	int		n;

	n = 0;
	j = 0;
	i = 0;
	while (i <= size)
	{
		array_fig[i] = j;
		j = j + 16;
		i++;
	}
}
