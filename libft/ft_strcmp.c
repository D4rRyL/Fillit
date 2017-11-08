/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:09:22 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/16 19:09:21 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compares two null-terminated string
** The first difference found is returned
** (numeric difference between unsigned char values)
** if no difference is found, zero is returned
*/

int	ft_strcmp(char const *s1, char const *s2)
{
	int		diff;
	size_t	cursor;

	diff = 0;
	cursor = 0;
	while ((diff == 0) && (s1[cursor] != '\0' || s2[cursor] != '\0'))
	{
		diff = (unsigned char)s1[cursor] - (unsigned char)s2[cursor];
		cursor++;
	}
	return (diff);
}
