/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fifo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 18:28:45 by mgautier          #+#    #+#             */
/*   Updated: 2016/12/21 18:50:06 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIFO_H
# define FIFO_H

# include "list.h"

typedef	struct	s_fifo
{
	t_lst	*begin_lst;
	t_lst	*end_lst;
}				t_fifo;

#endif
