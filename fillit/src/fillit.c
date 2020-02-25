/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:59:36 by eestell           #+#    #+#             */
/*   Updated: 2020/02/20 04:09:17 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "fillit.h"
#include <math.h>

char		*ft_fillletters(char *str)
{
	int		i;
	int		n;
	char	letter;

	i = 0;
	n = 0;
	letter = 'A';
	while (str[i] != '\0')
	{
		if (str[i] == '#')
		{
			str[i] = letter;
			n++;
		}
		if (n == 4)
		{
			n = 0;
			letter++;
		}
		i++;
	}
	return (str);
}

int			count_len(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i++] != '\0')
		if ((str[i] == '\n') || (str[i] == '.') || str[i] == '#')
			count++;
	return (count);
}

void		copy(char *str, char *str2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '.' || str[i] == '#')
		{
			str2[j] = str[i];
			j++;
		}
		i++;
	}
	str2[j] = '\0';
}

int			ft_prepare(char *str)
{
	char	*str_clear;
	int		len;
	int		size;

	if (!(ft_test_file(str)))
		return (0);
	size = 0;
	len = count_len(str);
	str_clear = (char*)malloc(sizeof(char) * (len + 1));
	copy(str, str_clear);
	len = ft_cnt(str_clear);
	size = ceil(sqrt(len * 4));
	str_clear = ft_fillletters(str_clear);
	ft_sq(str_clear, size, len - 1);
	free(str_clear);
	return (1);
}

int			main(int argc, char **argv)
{
	char	*str;
	int		len;
	int		fd;
	char	c;

	if (argc != 2)
		write(1, "usage: ./fillit file_name\n", 26);
	if ((fd = open(argv[1], O_RDONLY)) < 1 && argc == 2)
		write(1, "error\n", 6);
	str = (char*)malloc(sizeof(char) * 546);
	len = read(fd, str, 545);
	if (((read(fd, &c, 1) > 0) || (len < 20)) && (argc == 2) && fd > 0)
		write(1, "error\n", 6);
	else
	{
		str[++len] = '\0';
		if ((len > 20) && (argc == 2) && fd > 0)
			if (!(ft_prepare(str)))
				write(1, "error\n", 6);
	}
	close(fd);
	free(str);
	return (0);
}
