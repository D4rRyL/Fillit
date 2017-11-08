/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transform_tetri.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 17:50:42 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/15 12:41:20 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
#include <stdlib.h>

/*
** ft_trans_tetri transform one element of list containing a t_rel_position
** array of 3 struct into a element containing a t_tetrimino structure,
** by calculating the offset (aka, the biggest difference in the three
** points to the origin, for horizontal and vertical axis (vertical axis does
** not need a negative offset, since the first point will always be the topmost
** , but not necessary the leftmost.
*/

static t_offset		*ft_offset(const t_rel_position *coord)
{
	t_offset	*offset;
	size_t		index;

	offset = (t_offset*)malloc(sizeof(t_offset));
	if (offset != NULL)
	{
		index = 0;
		offset->x = 0;
		offset->y = 0;
		offset->minus_x = 0;
		while (index < 3)
		{
			if (offset->x < coord[index].x)
				offset->x = coord[index].x;
			if (offset->y < coord[index].y)
				offset->y = coord[index].y;
			if (offset->minus_x > coord[index].x)
				offset->minus_x = coord[index].x;
			index++;
		}
	}
	return (offset);
}

static t_tetrimino	*ft_transform_in_tetri(t_rel_position *coord,
											const unsigned int index)
{
	t_tetrimino	*new;

	new = (t_tetrimino*)malloc(sizeof(t_tetrimino));
	if (new != NULL)
	{
		new->relative_coordinates = coord;
		new->offset = ft_offset(coord);
		if (new->offset == NULL)
			return (NULL);
		new->identifier = 'A' + index;
	}
	return (new);
}

t_lst				*ft_trans_tetri(t_lst *piece, const unsigned int index)
{
	t_lst	*new_link;

	new_link = f_lstnew(NULL);
	if (new_link != NULL)
		new_link->content =
			ft_transform_in_tetri((t_rel_position*)piece->content, index);
	return (new_link);
}

void				tetrimino_dtor(void *tetri)
{
	t_tetrimino	*tetrimino;

	tetrimino = (t_tetrimino*)tetri;
	free(tetrimino->relative_coordinates);
	free(tetrimino->offset);
	free(tetrimino);
}
