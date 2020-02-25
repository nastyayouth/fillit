/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_symbols.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:56:39 by eestell           #+#    #+#             */
/*   Updated: 2020/02/20 01:03:28 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_test_symbols(char *s)
{
	int		count;
	int		resh;
	int		i;

	i = 0;
	count = 0;
	resh = 0;
	while (count < 20)
	{
		if (s[i] == '#')
			resh++;
		if (((i + 1) % 5 == 0 && s[i] != '\n' && i != 0))
			return (0);
		if ((i + 1) % 5 != 0)
			if (s[i] == '\n' && s[i] != '.' && s[i] != '#' && s[i] != '\0')
				return (0);
		if (s[i] != '\n' && s[i] != '\0' && s[i] != '#' && s[i] != '.')
			return (0);
		if ((s[i] == '\0' && count != 19 && s[i - 2] == '\n')
		|| ((s[i] == '\n') && (s[i - 2] == '\n')))
			return (0);
		count++;
		i++;
	}
	return (resh);
}
