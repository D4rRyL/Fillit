/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_lstnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 18:43:29 by mgautier          #+#    #+#             */
/*   Updated: 2016/12/20 19:01:01 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

t_lst	*f_lstnew(void const *content)
{
	t_lst	*new;

	new = (t_lst*)malloc(sizeof(t_lst));
	if (new != NULL)
	{
		new->content = (void*)content;
		new->next = NULL;
	}
	return (new);
}
