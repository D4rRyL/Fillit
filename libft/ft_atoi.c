/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:31:08 by mgautier          #+#    #+#             */
/*   Updated: 2016/11/17 13:56:32 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Recursion is used to go down until the end of the string
** From there, we're going back up with the 10-power
** (last digit is 10 ** 0 >> 1, previous 10 ** 1, and so on)
** Note : easily adaptable for any base with one more variable
**
** Line 51 is designed to mimic the behavior of atoi : if NULL is sent,
** a segfault happens.
*/

static int	ft_negative(const char *str, int *n)
{
	int	ten_power;

	if (*str < '0' || *str > '9')
		return (1);
	ten_power = ft_negative(str + 1, n);
	*n = *n - ((*str - '0') * ten_power);
	return (ten_power * 10);
}

static int	ft_positive(const char *str, int *n)
{
	int	ten_power;

	if (*str < '0' || *str > '9')
		return (1);
	ten_power = ft_positive(str + 1, n);
	*n = *n + ((*str - '0') * ten_power);
	return (ten_power * 10);
}

int			ft_atoi(const char *str)
{
	const char	*digits;
	int			number;

	if (str == NULL)
		ft_putchar(str[0]);
	digits = ft_strtrim(str);
	if (digits == NULL)
		return (0);
	number = 0;
	if (*digits == '-')
		ft_negative(digits + 1, &number);
	else if (*digits == '+')
		ft_positive(digits + 1, &number);
	else
		ft_positive(digits, &number);
	return (number);
}
