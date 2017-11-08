/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:07:27 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/17 11:11:08 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Cast the memory allocates by ft_memalloc into char.
** Since ft_memalloc initialize the allocated memory to 0, the string created
** is already filled with null characters.
** Function that use this one do not need to take the terminating null character
** into account, it is already added by this function. (size + 1);
** So size is the number of characters to be placed in the string.
*/

char	*ft_strnew(size_t size)
{
	return ((char*)ft_memalloc(sizeof(char) * (size + 1)));
}
