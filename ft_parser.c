/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 15:25:52 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/15 12:25:16 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_reader.h"
#include "ft_transform.h"
#include "fillit.h"
#include "libft.h"
#include <fcntl.h>
#include <stdlib.h>

/*
** Open the file, passe it to the reader,
** pass the pieces list to the valider,
** then successively transform into coord, then tetrimino
**
** Then, pass return that tetrimino list
*/

t_lst	*ft_parser(const char *file_name)
{
	t_lst	*pieces_str;
	t_lst	*pieces_coord;
	t_lst	*pieces_tetri;
	int		fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	pieces_str = ft_file_reader(fd);
	if (f_lst_every_valid(pieces_str, &ft_valid_pieces_format) != NULL)
		return (NULL);
	pieces_coord = f_lstmap(pieces_str, &ft_transform_into_coord);
	pieces_tetri = f_lstmapi(pieces_coord, &ft_trans_tetri);
	f_lstdel(&pieces_str, &ft_gen_strdel);
	f_lstdel(&pieces_coord, &no_destroy);
	if (close(fd) == -1)
		return (NULL);
	return (pieces_tetri);
}
