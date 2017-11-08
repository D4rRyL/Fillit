/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:48:12 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/16 18:40:41 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Set len bytes to c at the adress pointed
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	content;
	char			*memory;

	content = (unsigned char)c;
	memory = (char*)b;
	index = 0;
	while (index < len)
	{
		memory[index] = content;
		index++;
	}
	return (b);
}
