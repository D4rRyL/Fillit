/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_lstremoveif_one.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 14:15:24 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/13 16:30:52 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "bool.h"
#include "libft.h"

/*
** Try to suppress the matching element in the lst
** Returns TRUE on success, FALSE if elem does not exist.
*/

t_bool	f_lstremoveif_one(t_lst **lst, int ref, int (*match)(const t_lst *elem),
							void (*content_dtor)(void*))
{
	t_lst	*to_del;
	t_lst	*loc_lst;

	if (ref == match(*lst))
	{
		to_del = *lst;
		*lst = (*lst)->next;
		f_lstdelone(&to_del, content_dtor);
		return (TRUE);
	}
	loc_lst = *lst;
	while (loc_lst->next != NULL)
	{
		if (ref == match(loc_lst->next))
		{
			to_del = loc_lst->next;
			loc_lst->next = to_del->next;
			f_lstdelone(&to_del, content_dtor);
			return (TRUE);
		}
		loc_lst = loc_lst->next;
	}
	return (FALSE);
}
