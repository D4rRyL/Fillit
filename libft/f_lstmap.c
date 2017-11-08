/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_lstmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 13:00:04 by mgautier          #+#    #+#             */
/*   Updated: 2016/12/21 15:51:49 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

/*
** function to produce with a given list another one, using the function given
** as parameters
**
** The destiny of the original parameter lst is left to change : it can produce
** a copy, modify it, and destroy (or not) the original list.
** The allocation has to be done by change.
*/

t_lst	*f_lstmap(t_lst *lst, t_lst *(*change)(t_lst *elem))
{
	t_lst	*new_lst;
	t_lst	*new_elem;
	t_lst	*next;

	if (change == NULL || lst == NULL)
		return (lst);
	next = lst->next;
	new_lst = change(lst);
	new_elem = new_lst;
	if (new_elem == NULL)
		return (NULL);
	lst = next;
	while (lst != NULL)
	{
		next = lst->next;
		new_elem->next = change(lst);
		new_elem = new_elem->next;
		if (new_elem == NULL)
			return (NULL);
		lst = next;
	}
	return (new_lst);
}
