/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cnt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:10:23 by eestell           #+#    #+#             */
/*   Updated: 2020/02/15 21:49:39 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_cnt(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i++] != '\0')
		if (str[i] != '.' && str[i] != '\n')
			count++;
	count = count / 4;
	return (count);
}
