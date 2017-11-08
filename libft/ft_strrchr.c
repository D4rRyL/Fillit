/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:52:33 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/17 10:49:21 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Like ft_strchr, but locates the last occurence of c.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	match;
	char	letter;
	char	*strrchr;
	size_t	index;

	match = (char)c;
	index = 0;
	letter = s[index];
	strrchr = NULL;
	if (match == '\0')
		return ((char*)(s + ft_strlen(s)));
	while (letter != '\0')
	{
		if (letter == match)
			strrchr = (char*)(s + index);
		index++;
		letter = s[index];
	}
	return (strrchr);
}
