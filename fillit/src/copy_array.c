/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:28:56 by eestell           #+#    #+#             */
/*   Updated: 2020/02/15 20:28:07 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*copy_array(int *pos_fig, int size_ar)
{
	int		i;
	int		*copy_pos_fig;

	i = 0;
	copy_pos_fig = (int*)malloc(sizeof(int) * size_ar);
	while (i++ < size_ar)
	{
		copy_pos_fig[i] = pos_fig[i];
		i++;
	}
	return (copy_pos_fig);
}
