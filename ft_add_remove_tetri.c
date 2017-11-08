/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_remove_tetri.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 14:09:47 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/14 15:28:49 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve_array.h"
#include "fillit.h"

/*
** These functions add and remove a tetrimino from the solve array, at the
** position given by x and y
*/

void	ft_add_tetri(char **tab, int x, int y, t_tetrimino *piece)
{
	unsigned int	index;
	t_rel_position	*coord;
	char			identifier;

	identifier = piece->identifier;
	tab[y][x] = identifier;
	coord = piece->relative_coordinates;
	index = 0;
	while (index < 3)
	{
		tab[y + coord[index].y][x + coord[index].x] = identifier;
		index++;
	}
}

void	ft_remove_tetri(char **tab, int x, int y, t_tetrimino *piece)
{
	unsigned int	index;
	t_rel_position	*coord;

	index = 0;
	tab[y][x] = '.';
	coord = piece->relative_coordinates;
	while (index < 3)
	{
		tab[y + coord->y][x + coord->x] = '.';
		coord++;
		index++;
	}
}
