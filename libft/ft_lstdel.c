/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:30:32 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/16 17:57:43 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Check if the list and function are valid (not null),
** then initialize the deletion sequence with the first node and perform this :
** copying the current node adress into backup
** moving to next node
** apply deletion sequence to node pointed by backup(which is [current node -1])
** Finally set the pointer towards the first link to NULL, to avoid problems
** with eventual further call to free on the same pointer.
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new;
	t_list	*to_del;

	if (alst != NULL && del != NULL)
	{
		new = *alst;
		while (new != NULL)
		{
			to_del = new;
			new = new->next;
			ft_lstdelone(&to_del, del);
		}
		*alst = NULL;
	}
}
