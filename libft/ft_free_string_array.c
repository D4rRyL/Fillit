/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_string_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 15:48:31 by mgautier          #+#    #+#             */
/*   Updated: 2016/12/23 16:22:14 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_free_string_array(char ***tab)
{
	char	**to_free;

	to_free = *tab;
	while (*to_free != NULL)
	{
		ft_strdel(to_free);
		to_free++;
	}
	free(*tab);
	*tab = NULL;
	return (*tab);
}
