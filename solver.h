/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <chbechet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 16:19:52 by chbechet          #+#    #+#             */
/*   Updated: 2017/01/12 15:53:50 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H

# include "solve_array.h"
# include "fillit.h"
# include "libft.h"

static t_bool		ft_try_piece(t_resolution *array,
									int x, int y, const t_lst *tetri);
static t_bool		ft_try_every_position(t_resolution *array,
											const t_lst *tetri);
#endif
