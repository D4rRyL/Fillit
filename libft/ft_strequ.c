/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:14:46 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/16 19:22:03 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Test if s1 and s2 are identical
** Return 1 if true, 0 if false (and if any of the strings is not valid)
** ft_strcmp is used
*/

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 != NULL && s2 != NULL
			&& ft_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}
