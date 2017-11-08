/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   database.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 11:04:12 by mgautier          #+#    #+#             */
/*   Updated: 2016/12/14 17:31:00 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "database.h"

/*
** fill_types
**
** List all the database type available and their constructor, to allow
** to the db constuctor to select the appropriate constructor.
**
** To improve : find a way that does not limit the number of types avalaible
** while respecting 42 norm (currently that is limite by the number of lines
** in the function, so 25 types.
*/

static void	fill_types(t_constructor types[DB_TYPE_COUNT])
{
	types[DB_FILO_LIST] = NULL;
}

/*
** db_initialize
**
** Initalize all function pointers to NULL for a database
** That way, an attempt to use a method which is not supported by
** the data struct used will always result in an attempt to dereference
** a NULL pointer, so, a segfault.
*/

static void	db_initialize(t_database *db)
{
	db->database = NULL;
	db->destroy = NULL;
	db->find = NULL;
	db->add = NULL;
	db->del = NULL;
	db->show_all = NULL;
}

/*
** new_database
**
** Create a database object : allocate the memory, then fill it with
** the appropriate methods (depending on the type of database) by calling
** the corresponding constructor.
*/

t_database	*new_database(t_db_type type)
{
	t_constructor	constructors[DB_TYPE_COUNT];
	size_t			index_type;
	t_database		*database;

	database = (t_database*)malloc(sizeof(t_database));
	if (database == NULL)
		return (NULL);
	db_initialize(database);
	index_type = 0;
	fill_types(constructors);
	while (index_type != DB_TYPE_COUNT)
	{
		if (type == index_type)
		{
			constructors[index_type](database);
			return (database);
		}
		index_type++;
	}
	return (NULL);
}
