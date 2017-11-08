/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_filo_take.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 18:59:19 by mgautier          #+#    #+#             */
/*   Updated: 2016/12/23 12:10:31 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fifo.h"
#include "libft.h"
#include <stdlib.h>

/*
** this function take an element from a fifo, if it exists.
*/

void	*f_fifo_take(t_fifo *fifo)
{
	void	*content;

	if (fifo == NULL || fifo->begin_lst == NULL)
		return (NULL);
	content = f_lstpop(&(fifo->begin_lst));
	if (fifo->begin_lst == NULL)
		fifo->end_lst = NULL;
	return (content);
}
