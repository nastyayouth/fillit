/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:57:01 by eestell           #+#    #+#             */
/*   Updated: 2020/02/20 01:03:31 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_test_file(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_test_symbols(&str[i])) != 4)
			return (0);
		if (!(ft_test_figure(&str[i])))
			return (0);
		i = i + 21;
	}
	if (str[i - 1] == '\n')
		return (0);
	return (1);
}
