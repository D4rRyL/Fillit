/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_relative_position.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 10:59:55 by mgautier          #+#    #+#             */
/*   Updated: 2016/12/23 15:30:30 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*
** ft_absolute_positions
**
** Parse the two-dimensions array given as an entry to find 4 '#'.
** Return their absolutes positions (considering array[0][0] as the origin)
** inside an array of pointers of struct (t_abs_position)
*/

static t_abs_position	*ft_absolute_positions(char **piece_description)
{
	t_abs_position	point;
	size_t			index_positions;
	t_abs_position	*positions;

	positions = (t_abs_position*)ft_memalloc(sizeof(t_abs_position) * 4);
	if (positions == NULL)
		return (NULL);
	index_positions = 0;
	point.y = 0;
	while (point.y < 4)
	{
		point.x = 0;
		while (point.x < 4)
		{
			if (piece_description[point.y][point.x] == '#')
			{
				positions[index_positions].x = point.x;
				positions[index_positions].y = point.y;
				index_positions++;
			}
			point.x++;
		}
		point.y++;
	}
	return (positions);
}

/*
** ft_relative_positions
**
** This function is the entry and exit points for that file (others function
** are static)
** It computes three positions (t_rel_position) relative to the first '#'
** of a tetriminos (the first being defined as the highest and leftmost one)
**
** The return value is the address of a struct array containing those, or NULL
** if an error occured (allocation error)
*/

t_rel_position			*ft_relative_positions(char **piece_description)
{
	t_rel_position	*rel_positions;
	t_abs_position	*abs_positions;
	t_rel_position	origin;
	size_t			index_position;

	abs_positions = ft_absolute_positions(piece_description);
	rel_positions = (t_rel_position*)ft_memalloc(sizeof(t_rel_position) * 3);
	if (rel_positions != NULL && abs_positions != NULL)
	{
		origin.x = (int)abs_positions[0].x;
		origin.y = (int)abs_positions[0].y;
		index_position = 0;
		while (index_position < 3)
		{
			rel_positions[index_position].x =
				(int)abs_positions[index_position + 1].x - origin.x;
			rel_positions[index_position].y =
				(int)abs_positions[index_position + 1].y - origin.y;
			index_position++;
		}
	}
	else
		ft_memdel((void**)&rel_positions);
	ft_memdel((void**)&abs_positions);
	return (rel_positions);
}
