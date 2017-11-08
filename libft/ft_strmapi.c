/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:09:20 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/17 10:07:12 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates a new string by applying the fonction f to the string s,
** character by character (index is given as additional parameter).
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strmapi;
	size_t	index;

	if (s == NULL || f == NULL)
		return (NULL);
	strmapi = ft_strnew(ft_strlen(s));
	if (strmapi != NULL)
	{
		index = 0;
		while (s[index] != '\0')
		{
			strmapi[index] = f(index, s[index]);
			index++;
		}
	}
	return (strmapi);
}
