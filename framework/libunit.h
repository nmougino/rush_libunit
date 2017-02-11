/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:31:30 by ahamouda          #+#    #+#             */
/*   Updated: 2017/02/11 12:50:51 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

typedef int				(*f_p)(void);

typedef struct			s_unit_test
{
	char				*test_name;
	f_p					test_func;;
	struct s_unit_test	*next;
}						t_unit_test;

/*
** Ajoute un test a la fin de la liste.
*/

void					load_test(t_unit_test **list, char *name, f_p func);

/*
** execute tous les tests les un a la suite des autres dans l'interface du
** Mini-framework.
*/

int						launch_test(t_unit_test **list);

#endif
