/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_sq.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:29:02 by eestell           #+#    #+#             */
/*   Updated: 2020/02/15 20:28:29 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_make_sq(int n)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = (char*)malloc((n * n) + 1)))
		return (NULL);
	while (i < (n * n))
	{
		str[i] = '.';
		i++;
	}
	str[i] = '\0';
	return (str);
}
