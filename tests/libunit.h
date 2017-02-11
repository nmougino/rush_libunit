/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:31:30 by ahamouda          #+#    #+#             */
/*   Updated: 2017/02/11 17:25:14 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <stdlib.h>
# include "libft.h"

typedef int				(*f_p)(void);

typedef struct			s_unit_test
{
	char				*test_name;
	f_p					test_func;
	struct s_unit_test	*next;
}						t_unit_test;

/*
** Ajoute un test a la fin de la liste.
*/

void					load_test(t_unit_test **list, char *name, f_p func);

/*
** execute tous les tests les un a la suite des autres dans l'interface du
** Mini-framework.
** tableau:: OK, KO, SEGV, BUSE, UNKNOW
*/

int						launch_test(t_unit_test *list);

int						display_return(int stat, char *name);

#endif
