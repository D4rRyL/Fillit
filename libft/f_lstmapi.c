/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_lstmapi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 18:45:21 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/04 15:07:46 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

/*
** Same as lstmap, but gives an index to the function parameter as well
*/

t_lst	*f_lstmapi(t_lst *lst,
					t_lst *(*change)(t_lst *elem, unsigned int index))
{
	t_lst			*new_lst;
	t_lst			*new_elem;
	t_lst			*next;
	unsigned int	index;

	if (change == NULL || lst == NULL)
		return (lst);
	index = 0;
	next = lst->next;
	new_lst = change(lst, index);
	new_elem = new_lst;
	if (new_elem == NULL)
		return (NULL);
	lst = next;
	while (lst != NULL)
	{
		next = lst->next;
		index++;
		new_elem->next = change(lst, index);
		new_elem = new_elem->next;
		if (new_elem == NULL)
			return (NULL);
		lst = next;
	}
	return (new_lst);
}
