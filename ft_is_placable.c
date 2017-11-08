/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_placable.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <chbechet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 16:45:38 by chbechet          #+#    #+#             */
/*   Updated: 2017/01/14 15:22:26 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"
#include "solve_array.h"

/*
** This function test if the piece does not overlap another piece.
*/

t_bool	ft_is_not_overlap(char **tab, int x, int y, t_tetrimino *piece)
{
	unsigned int	index;
	t_rel_position	*coord;

	index = 0;
	if (tab[y][x] != '.')
		return (FALSE);
	coord = piece->relative_coordinates;
	while (index < 3)
	{
		if (tab[y + coord->y][x + coord->x] != '.')
			return (FALSE);
		coord++;
		index++;
	}
	return (TRUE);
}

/*
** This function test if the piece does not go out of the array bounds.
*/

t_bool	ft_out_of_bound(int size_tab, int x, int y, t_tetrimino *piece)
{
	t_offset	*offset;

	offset = piece->offset;
	if (!(offset->x + x < size_tab))
		return (FALSE);
	if (!(offset->y + y < size_tab))
		return (FALSE);
	if (!(offset->minus_x + x >= 0))
		return (FALSE);
	return (TRUE);
}

/*
** Combines the two test functions.
*/

t_bool	ft_is_placable(t_resolution *array, int x, int y, t_tetrimino *piece)
{
	return ((ft_out_of_bound(array->size_tab, x, y, piece))
			&& (ft_is_not_overlap(array->tab, x, y, piece)));
}
