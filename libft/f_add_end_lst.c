/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_add_end_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 16:37:04 by mgautier          #+#    #+#             */
/*   Updated: 2016/12/14 17:24:36 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*f_add_end_lst(t_lst *last_link, const void *content)
{
	t_lst	*new_last_link;

	new_last_link = f_lstnew(content);
	if (last_link != NULL)
		last_link->next = new_last_link;
	return (new_last_link);
}
