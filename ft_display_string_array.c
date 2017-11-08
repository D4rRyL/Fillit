/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_string_array.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <chbechet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 17:59:32 by chbechet          #+#    #+#             */
/*   Updated: 2017/01/14 18:43:03 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function just display the array received in paramter.
*/

void	ft_display_string_array(char **array)
{
	int i;

	i = 0;
	while (array[i] != NULL)
	{
		ft_putendl(array[i]);
		i++;
	}
}
