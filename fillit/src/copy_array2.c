/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_array2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:11:02 by eestell           #+#    #+#             */
/*   Updated: 2020/02/15 20:28:11 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*copy_array2(char *pos_fig, int size_ar)
{
	int		i;
	char	*copy_pos_fig;

	i = 0;
	copy_pos_fig = (char*)malloc(sizeof(char) * (size_ar * size_ar + 1));
	while (i < size_ar * size_ar)
	{
		copy_pos_fig[i] = pos_fig[i];
		i++;
	}
	copy_pos_fig[i] = '\0';
	return (copy_pos_fig);
}
