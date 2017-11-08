/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_to_coordinates.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 12:18:39 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/14 18:09:53 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_relative_position.h"
#include "fillit.h"
#include "libft.h"

/*
** This function transform a element of list containing a raw tetrimino
** (under the form of a string of 20 char) into a link containing a set of
** 3 relatives positions.
*/

static t_rel_position	*ft_string_to_coordinates(const char *str)
{
	char			**tab_lines;
	t_rel_position	*rel_positions;

	tab_lines = ft_strsplit(str, '\n');
	rel_positions = ft_relative_positions(tab_lines);
	ft_free_string_array(&tab_lines);
	return (rel_positions);
}

t_lst					*ft_transform_into_coord(t_lst *piece)
{
	t_lst *new_link;

	new_link = f_lstnew(NULL);
	if (new_link != NULL)
		new_link->content = ft_string_to_coordinates((char*)piece->content);
	return (new_link);
}
