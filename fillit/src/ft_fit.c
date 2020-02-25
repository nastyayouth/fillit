/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:28:10 by eestell           #+#    #+#             */
/*   Updated: 2020/02/17 06:08:09 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_fit(char *str, char *str_sq, int n, int s)
{
	int		i;
	int		st;

	i = 0;
	while (str[i] == '.')
		i++;
	st = i;
	while (i < 16)
	{
		if (str[i] != '.')
		{
			if ((n % s + i % 4 - st % 4 < 0) || (n / s + (i / 4 - st / 4)) < 0)
				return (0);
			if ((n % s + i % 4 - st % 4 < s) && (n / s + (i / 4 - st / 4)) < s)
			{
				if (str_sq[n + i % 4 - st % 4 + (s) * (i / 4 - st / 4)] != '.'
				&& str[i] != '\0')
					return (0);
			}
			else
				return (0);
		}
		i++;
	}
	return (1);
}
