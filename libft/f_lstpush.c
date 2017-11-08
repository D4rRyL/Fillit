/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_lstpush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 18:38:52 by mgautier          #+#    #+#             */
/*   Updated: 2016/12/20 18:59:32 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "libft.h"
#include <stdlib.h>

t_lst	*f_lstpush(void const *content, t_lst **list)
{
	t_lst	*new;

	new = f_lstnew(content);
	if (new == NULL)
		return (NULL);
	new->next = *list;
	*list = new;
	return (new);
}
