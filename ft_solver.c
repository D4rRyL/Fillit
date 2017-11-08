/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:09:11 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/14 15:57:41 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solver.h"
#include "solve_array.h"
#include "libft.h"
#include <stdlib.h>

/*
** The solver
**
** The solver functions that way : it creates an array of size {square root of
** number of pieces * 4, rouded up}.
** Then it tries to place the first piece. If it does, it tries the next.
** If one piece fails ot be place, the call stack go back to the previous,
** which is considered to have failed to be placed (and is removed of the array)
** Then, it is tried on the next case.
**
** If no succesfull placement is found for one size of array,
** the solver free it, increment the size, allocate a new array and give it
** another try. Until it finds a solution.
*/

static t_bool	ft_try_every_position(t_resolution *array,
										const t_lst *tetris_lst)
{
	int	index_x;
	int	index_y;

	if (tetris_lst == NULL)
		return (TRUE);
	index_x = 0;
	index_y = 0;
	while (index_y < array->size_tab)
	{
		if (ft_try_piece(array, index_x, index_y, tetris_lst))
			return (TRUE);
		if (index_x > array->size_tab)
		{
			index_x = 0;
			index_y++;
		}
		else
			index_x++;
	}
	return (FALSE);
}

static t_bool	ft_try_piece(t_resolution *array, int x, int y,
								const t_lst *tetri)
{
	if (!ft_is_placable(array, x, y, (t_tetrimino*)tetri->content))
		return (FALSE);
	ft_add_tetri(array->tab, x, y, (t_tetrimino*)tetri->content);
	if (ft_try_every_position(array, tetri->next))
		return (TRUE);
	ft_remove_tetri(array->tab, x, y, (t_tetrimino*)tetri->content);
	return (FALSE);
}

char			**ft_solver(const t_lst *tetris_lst)
{
	t_resolution	*solve_tab;

	solve_tab = ft_generate_struct_resolve(tetris_lst);
	while (!ft_try_every_position(solve_tab, tetris_lst))
	{
		ft_free_string_array(&solve_tab->tab);
		solve_tab->size_tab++;
		solve_tab->tab = ft_generate_square(solve_tab->size_tab);
	}
	return (ft_extract_array(&solve_tab));
}
