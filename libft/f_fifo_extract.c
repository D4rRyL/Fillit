/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_fifo_extract.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 13:11:02 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/03 14:08:28 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fifo.h"
#include "list.h"
#include <stdlib.h>

/*
** Free the fifo struct and returns the lst contains in it.
*/

t_lst	*f_fifo_extract(t_fifo **fifo)
{
	t_lst	*extract;

	if (*fifo == NULL)
		return (NULL);
	extract = (*fifo)->begin_lst;
	(*fifo)->begin_lst = NULL;
	(*fifo)->end_lst = NULL;
	free(*fifo);
	*fifo = NULL;
	return (extract);
}
