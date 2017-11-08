/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:53:56 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/06 16:05:58 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>

typedef struct			s_relative_position
{
	int x;
	int y;
}						t_rel_position;
typedef struct			s_absolute_position
{
	size_t x;
	size_t y;
}						t_abs_position;
typedef struct			s_offset
{
	int	x;
	int	y;
	int	minus_x;
}						t_offset;
typedef struct			s_tetrimino
{
	t_rel_position		*relative_coordinates;
	t_offset			*offset;
	char				identifier;
}						t_tetrimino;

#endif
