/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_strsplit_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 13:14:05 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/04 19:00:25 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function proceeds with a loop performing the folowing actions :
** advance until the current characther is different from the separator,
** while keeping an index to the previous separator (first being the beginning
** of the string).
** Then, send to new_split the adress of the first character of the current
** string split, and the size of the split (the current index minus the index of
** the previous separator).
** new_split then produces a lst link, which is put at the end of the list.
*/

static char		*new_split(char const *src, size_t size)
{
	size_t	index;
	char	*split;

	index = 0;
	split = (char*)malloc(sizeof(char) * (size + 1));
	while (index < size)
	{
		split[index] = src[index];
		index++;
	}
	split[size] = '\0';
	return (split);
}

t_lst			*f_strsplit_lst(char const *s, const char c)
{
	size_t	index;
	size_t	index_current;
	t_lst	*strsplit;
	t_lst	*last;

	strsplit = NULL;
	last = NULL;
	index = 0;
	while (s != NULL)
	{
		index_current = index;
		while (s[index] != c && s[index] != '\0')
			index++;
		last = f_add_end_lst(last,
				new_split(s + index_current, index - index_current));
		if (strsplit == NULL)
			strsplit = last;
		if (s[index] == '\0')
			break ;
		index++;
	}
	return (strsplit);
}
