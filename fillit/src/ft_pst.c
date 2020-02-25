/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:28:41 by eestell           #+#    #+#             */
/*   Updated: 2020/02/17 02:42:00 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <math.h>

int		ft_lensq2(char *sq)
{
	int		i;

	i = 0;
	while (sq[i] != '\0')
		i++;
	return (i);
}

char	*ft_pst(char *str, char *str_sq, int n)
{
	int		j;
	int		i;
	int		start;
	int		size;

	size = sqrt(ft_lensq2(str_sq));
	j = 0;
	i = 0;
	while (str[i] == '.')
		i++;
	start = i;
	while (i < 16)
	{
		j = n + i % 4 - start % 4 + size * (i / 4 - start / 4);
		if (str[i] != '.' && str[i] != '\0')
			str_sq[j] = str[i];
		i++;
	}
	return (str_sq);
}
