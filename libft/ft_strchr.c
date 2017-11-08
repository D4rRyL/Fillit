/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:52:33 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/16 19:04:28 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurence of c (converted to char) in s
** and returns a pointer towards it.
** '\0' is a valid character to search
** If no match is found, NULL is returned.
*/

char	*ft_strchr(const char *s, int c)
{
	char	match;
	char	letter;
	size_t	index;

	match = (char)c;
	index = 0;
	letter = s[index];
	while (letter != '\0')
	{
		if (letter == match)
			return ((char*)(s + index));
		index++;
		letter = s[index];
	}
	if (match == '\0')
		return (char*)(s + index);
	return (NULL);
}
