/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:28:25 by eestell           #+#    #+#             */
/*   Updated: 2020/02/15 22:33:56 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print_sq(char *sq, int n)
{
	int		i;

	i = 0;
	while (sq[i] != '\0')
	{
		write(1, &sq[i], 1);
		if ((i + 1) % n == 0)
			write(1, "\n", 1);
		i++;
	}
}
