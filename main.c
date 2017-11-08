/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <chbechet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 16:58:52 by chbechet          #+#    #+#             */
/*   Updated: 2017/01/15 12:37:44 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_transform.h"
#include "main.h"
#include "libft.h"
#include <string.h>

int		main(int argc, char **argv)
{
	t_lst	*stock;
	char	**square;

	if (argc != 2)
	{
		ft_putstr("Usage : fillit + filename.");
		return (1);
	}
	if ((stock = ft_parser(argv[1])) == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	square = ft_solver(stock);
	ft_display_string_array(square);
	ft_free_string_array(&square);
	f_lstdel(&stock, &tetrimino_dtor);
	return (0);
}
