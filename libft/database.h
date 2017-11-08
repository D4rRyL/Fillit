/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   database.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 10:44:15 by mgautier          #+#    #+#             */
/*   Updated: 2016/12/21 15:03:14 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATABASE_H
# define DATABASE_H

/*
** Squellette for database objects
** type, constructor, destructor, comparator (aka the function used
** to distinguish objects stored in the database
*/
# include "libft.h"

typedef	void	(*t_destructor)(t_database *db);
typedef	void	(*t_constructor)(t_database *db);
typedef	int		(*t_comparator)(void *key_1, void *key_2);

/*
** Methods for databases
*/

typedef void	*(*t_find)(t_database* db, void *key);
typedef void	*(*t_add)(t_database* db, void *key, void *content);
typedef void	*(*t_push)(t_database* db, void *content);
typedef void	*(*t_pop)(t_database* db);
typedef void	*(*t_del)(t_database* db, void *key);
typedef void	*(*t_show_all)(t_database* db);

/*
** Definition of the database object
**
** The first element is a pointer towards the actual database
** The seconde is the comparator, the function used to tell if two elements are
** the same, if one is "bigger" or "smaller" (what exactly that means is to the
** discretion of the comparator).
**
** The followers are pointers to methods which provides the same result,
** but performs differently according to the database type
** Some methods might not be supported for some database types.
** In that case, any attempt to invoke the said method will result in a segfault
*/

struct	s_database
{
	void			*database;
	t_destructor	destroy;
	t_find			find;
	t_add			add;
	t_push			push;
	t_pop			pop;
	t_del			del;
	t_show_all		show_all;
};

#endif
