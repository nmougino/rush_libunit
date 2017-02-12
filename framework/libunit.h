/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:31:30 by ahamouda          #+#    #+#             */
/*   Updated: 2017/02/12 19:52:03 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <stdlib.h>
# include "libft.h"

# define EC_DEF		"\033[0m"
# define EC_GRA		"\033[1m"
# define EC_SOU		"\033[4m"
# define EC_BLI		"\033[5m"
# define EC_BLA		"\033[30m"
# define EC_RED		"\033[31m"
# define EC_GRE		"\033[32m"
# define EC_YEL		"\033[33m"
# define EC_BLU		"\033[34m"
# define EC_PUR		"\033[35m"
# define EC_CYA		"\033[36m"
# define EC_WHI		"\033[37m"

# define UNIT_OK	"\033[32mOK\033[0m"
# define UNIT_KO	"\033[31mKO\033[0m"
# define UNIT_SEGV	"\033[33mSEGV\033[0m"
# define UNIT_BUSE	"\033[33mBUSE\033[0m"

typedef struct			s_unit_test
{
	char				*test_name;
	int					(*f)(void);
	struct s_unit_test	*next;
}						t_unit_test;

/*
** Ajoute un test a la fin de la liste.
*/

void					load_test(t_unit_test **list, char *name,
						int (*f)(void));

/*
** execute tous les tests les un a la suite des autres dans l'interface du
** Mini-framework.
** tableau:: OK, KO, SEGV, BUSE, UNKNOW
*/

int						launch_test(t_unit_test *list);

int						display_return(int stat, char *name);

#endif
