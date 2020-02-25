/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_figure.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:56:09 by eestell           #+#    #+#             */
/*   Updated: 2020/02/20 03:36:53 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		count_near(char *str, int i)
{
	int		n;

	n = 0;
	if (str[i + 5] == '#')
		n++;
	if (str[i - 5] == '#')
		n++;
	if ((str[i - 1] == '#') && ((i - 1) / 5 == i / 5))
		n++;
	if ((str[i + 1] == '#') && ((i + 1) / 5 == i / 5))
		n++;
	return (n);
}

int		ft_test_figure(char *str)
{
	int		i;
	int		n;

	n = 0;
	i = 0;
	while (i < 19)
	{
		if (str[i] == '#')
		{
			if (count_near(str, i) < 1)
				return (0);
			else
			{
				n = n + count_near(str, i);
			}
		}
		i++;
	}
	if (n < 6)
		return (0);
	return (1);
}
