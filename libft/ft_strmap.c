/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:47:03 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/17 10:06:05 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates a new string by applying the fonction f to the string s,
** character by character.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*strmap;
	size_t	index;

	if (s == NULL || f == NULL)
		return (NULL);
	strmap = ft_strnew(ft_strlen(s));
	if (strmap != NULL)
	{
		index = 0;
		while (s[index] != '\0')
		{
			strmap[index] = f(s[index]);
			index++;
		}
	}
	return (strmap);
}
