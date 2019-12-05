/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_validate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 14:12:25 by eestell           #+#    #+#             */
/*   Updated: 2019/12/05 18:21:35 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt(int nb)
{
	int		c;

	c = 1;
	while (nb != c * c)
	{
		c++;
		if (nb > c * c || nb <= 0)
			return (c);
	}
	return (c);
}

int		ft_count_figures(char *str)
{
	int		n = 0;
	int		i = 0;

	while (str[i++] != '\0')
		if (str[i] == '\n')
			n++;
	n = n / 5 * 4;
	//n = ft_sqrt(n * (n +1));
	//n = n * n;
	printf("n= %d\n", n);
	return (n);
}
char  *ft_make_squre(int n)
{
	int i = 0;
	char	*str1;
	int		a;
	if (!(str1 = (char*)malloc((n*(n+2)))))
		return (NULL);
	a = n + 1;
	while (i < n*(n+2))
	{
		if ( i == a)
		{
			str1[i] = '\n';
			a = a + (n + 2);
			i++;
		}
		if (i % n == 0)
		{
			str1[i] = 'a';
		}
		if ( i != a || i % n != 0)
			str1[i] = '.';
		i++;
	}
	str1[i] = '\0';
	return(str1);
}
int ft_test_figure_to_sq(char *str, char *sq)
{
	int		i = 0;
	int		j = 0;

	while (str[j] != '#')
		j++;
	while (sq[i] != '\0' || str[j] != '\0')
	{
		if (str[j] == '\n')
		{
			while (sq[i] != '\n')
			{
				i++;
			}
			//printf("here %d\n", i);
			j++;

		}
		if (str[j] == '#')
		{
			if (sq[i] == '\n' || sq[i] == '#')
				return(0);
		}
		i++;
		j++;
	}
	return(1);
}
void ft_paste_figure_to_sq(char *str, char *sq)
{
	int		i = 0;
	int		j = 0;

	while (str[j] != '#')
		j++;
	while (sq[i] != '\0' || str[j] != '\0')
	{
		if (str[j] == '\n')
		{
			while (sq[i] != '\n')
				i++;
			j++;
		}
		if (str[j] == '#')
			sq[i] = '#';
		i++;
		j++;
	}
	printf("%s", sq);
}
int main()
{
	int		fd;
	char	*str;
	char	*str_sq = NULL;
	int		len_str;
	int 	n;

	/*if (argc > 2)
	{
		printf ("ERROR");

	}*/
	if ((fd = open("2.txt", O_RDONLY)) == -1)
	{
		return (0);
		printf("ERROR");
	}
	str = (char*)malloc(300);
	len_str = read (fd, str, 300);
	str[len_str + 1] = '\0';
	ft_putstr(str);
	ft_putchar('\n');
	n = ft_count_figures(str);
	printf("size n = %d\n", n);
	str_sq = ft_make_squre(n);
	printf ("after make in main str =\n%s", str_sq);
	printf("%d\n", ft_test_figure_to_sq(str, str_sq));
	if (ft_test_figure_to_sq(str, str_sq) == 1)
		ft_paste_figure_to_sq(str, str_sq);
	free(str);
	free(str_sq);
	return (0);
}
