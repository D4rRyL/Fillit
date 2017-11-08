/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_lstsearch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 14:53:38 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/04 17:23:24 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

/*
** Returns first element that returns the integer ref when the function match
** is applied to it
*/

void	*f_lstsearch(const t_lst *list, const int ref,
		int (*match)(const t_lst *elem))
{
	while (list != NULL)
	{
		if (ref == match(list))
			return (list->content);
		list = list->next;
	}
	return (NULL);
}
