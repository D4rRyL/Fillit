/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:08:35 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/17 15:50:55 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy up to len characters from src into dst.
** If src is smaller than len, the reminder of dst is filled with null character
** Otherwise, dst is not terminated.
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	index;

	index = 0;
	while (index != len && src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	while (index != len)
	{
		dst[index] = '\0';
		index++;
	}
	return (dst);
}
