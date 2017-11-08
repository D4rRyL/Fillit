/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushdata.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 15:07:09 by mgautier          #+#    #+#             */
/*   Updated: 2016/12/07 16:28:40 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpushdata(t_list **list,
						const void *content, size_t content_size)
{
	t_list	*new;

	if (list == NULL)
		return (NULL);
	new = ft_lstnew(content, content_size);
	if (new == NULL)
		return (NULL);
	new->next = *list;
	*list = new;
	return (new);
}
