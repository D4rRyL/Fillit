/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_filo_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 18:56:31 by mgautier          #+#    #+#             */
/*   Updated: 2016/12/23 12:09:50 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fifo.h"
#include <stdlib.h>

t_fifo	*f_fifo_create(void)
{
	t_fifo	*new;

	new = (t_fifo*)malloc(sizeof(t_fifo));
	if (new != NULL)
	{
		new->begin_lst = NULL;
		new->end_lst = NULL;
	}
	return (new);
}
