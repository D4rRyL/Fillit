/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:41:10 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/16 18:02:11 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Check if the function is valid (first link is checked by the first iteration
** of the while) and initialize with the first link of the list
** Then, until end of the loop (link pointing to NULL) :
** stock the current link
** move to the next
** apply the function on the stocked link
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*new;
	t_list	*to_iter;

	if (f != NULL)
	{
		new = lst;
		while (new != NULL)
		{
			to_iter = new;
			new = new->next;
			f(to_iter);
		}
	}
}
