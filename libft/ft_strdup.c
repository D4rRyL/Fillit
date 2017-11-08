/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:45:40 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/16 19:19:55 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Make an allocated copy of src and return it.
** If allocation fail, NULL is returned.
*/

char	*ft_strdup(const char *src)
{
	size_t	len;
	size_t	cursor;
	char	*dest;

	len = ft_strlen(src);
	dest = (char*)malloc(sizeof(char) * (len + 1));
	if (dest == 0)
		return (dest);
	cursor = 0;
	while (cursor < len + 1)
	{
		dest[cursor] = src[cursor];
		cursor++;
	}
	return (dest);
}
