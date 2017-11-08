/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:09:15 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/04 15:09:19 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The recursion works that way : if n has more than one digit (n <= 10),
** write all digits before the last (with the recursive call);
** then write last digit.(n % 10)
*/

static void	ft_positive(int n)
{
	if (n >= 10)
		ft_positive(n / 10);
	ft_putchar(n % 10 + '0');
}

static void	ft_negative(int n)
{
	if (n <= -10)
		ft_negative(n / 10);
	ft_putchar(-(n % 10) + '0');
}

void		ft_putnbr(int n)
{
	if (n >= 0)
		ft_positive(n);
	else
	{
		ft_putchar('-');
		ft_negative(n);
	}
}
