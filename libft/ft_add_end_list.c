/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_end_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 16:37:04 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/22 17:21:06 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_add_end_list(t_list *last_link,
		const void *content, size_t content_size)
{
	t_list	*new_last_link;

	new_last_link = ft_lstnew(content, content_size);
	if (last_link != NULL)
		last_link->next = new_last_link;
	return (new_last_link);
}
