/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <eestell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:59:06 by eestell           #+#    #+#             */
/*   Updated: 2019/12/04 14:15:10 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include "libft/libft.h"

#define T_H (int [8]) {1,0,0,1,1,1,2,1}
#define T_D (int [8]) {0,0,1,0,2,0,1,1}
#define T_R (int [8]) {0,0,0,1,1,1,0,2}
#define T_L (int [8]) {1,0,0,1,1,1,1,2}

typedef struct      s_figure
{
    int             *type_figure;
    struct figure   *next;   
}                   t_figure;

#endif
