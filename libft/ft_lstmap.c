/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:01:30 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/16 18:07:36 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates a new list based on the transformation of lst
** Every allocation is checked to be NULL to be sure that the programme does not
** attempt to dereference NULL.
** A pointer to the newly created list is returned.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*modif;
	t_list	*new;
	t_list	*first_link;

	if (lst == NULL)
		return (lst);
	modif = f(lst);
	lst = lst->next;
	new = ft_lstnew(modif->content, modif->content_size);
	if (new == NULL)
		return (new);
	first_link = new;
	while (lst != NULL)
	{
		modif = f(lst);
		lst = lst->next;
		new->next = ft_lstnew(modif->content, modif->content_size);
		if (new->next == NULL)
			return (new->next);
		new = new->next;
	}
	return (first_link);
}
