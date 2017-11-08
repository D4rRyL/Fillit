/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_array.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 18:41:03 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/14 17:54:33 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_ARRAY_H
# define SOLVE_ARRAY_H

# include "fillit.h"
# include "libft.h"

typedef struct		s_resolution
{
	int				size_tab;
	char			**tab;
}					t_resolution;

t_resolution		*ft_generate_struct_resolve(const t_lst *tetris_lst);
char				**ft_extract_array(t_resolution **destroy_this);
char				**ft_generate_square(size_t side_length);
t_bool				ft_is_placable(t_resolution *array,
									int x, int y, t_tetrimino *piece);
void				ft_add_tetri(char **tab, int x, int y, t_tetrimino *piece);
void				ft_remove_tetri(char **tab, int x, int y,
									t_tetrimino *piece);
#endif
