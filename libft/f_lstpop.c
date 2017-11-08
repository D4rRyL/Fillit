/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_lstpop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 14:58:59 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/03 16:51:00 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

/*
** Return the content of the first elem of a list and remove it frm the list
*/

void	*f_lstpop(t_lst **first_link)
{
	t_lst	*pop;
	void	*content;

	pop = *first_link;
	if (pop != NULL)
	{
		*first_link = (*first_link)->next;
		content = pop->content;
		free(pop);
	}
	else
		content = NULL;
	return (content);
}
