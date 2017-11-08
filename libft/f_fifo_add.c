/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_filo_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 18:39:36 by mgautier          #+#    #+#             */
/*   Updated: 2016/12/21 19:25:05 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fifo.h"
#include "libft.h"

/*
** That function add an elem containing content to the fifo passed.
*/

t_fifo	*f_fifo_add(t_fifo *fifo, const void *content)
{
	if (fifo == NULL)
		return (NULL);
	fifo->end_lst = f_add_end_lst(fifo->end_lst, content);
	if (fifo->end_lst == NULL)
		return (NULL);
	if (fifo->begin_lst == NULL)
		fifo->begin_lst = fifo->end_lst;
	return (fifo);
}
