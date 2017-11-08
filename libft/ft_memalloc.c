/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 10:49:25 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/16 18:17:28 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates memomy according to parameter, and initialize all bytes to 0;
*/

void	*ft_memalloc(size_t size)
{
	size_t	index;
	char	*memalloc;

	memalloc = (char*)malloc(size);
	index = 0;
	if (memalloc != NULL)
	{
		while (index < size)
		{
			memalloc[index] = 0;
			index++;
		}
	}
	return ((void*)memalloc);
}
