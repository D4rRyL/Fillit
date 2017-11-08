/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:34:59 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/16 19:23:29 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** If both s and f are valid (not NULL), perform f on every character of f until
** the null-terminating character
*/

void	ft_striter(char *s, void (*f)(char*))
{
	if (s != NULL && f != NULL)
	{
		while (*s != '\0')
		{
			f(s);
			s++;
		}
	}
}
