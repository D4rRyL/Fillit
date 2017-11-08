/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piece_reader.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 13:32:34 by chbechet          #+#    #+#             */
/*   Updated: 2017/01/14 18:43:47 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#define BUF_SIZE 20

/*
** This function allocate a buf_size, read the file descriptor received
** in parameter and put it in buf.
*/

char		*ft_piece_reader(const int fd)
{
	int		reader;
	char	*buf;

	buf = (char*)malloc(sizeof(char) * (BUF_SIZE + 1));
	if (buf == NULL)
		return (NULL);
	reader = read(fd, buf, BUF_SIZE);
	buf[reader] = '\0';
	return (buf);
}
