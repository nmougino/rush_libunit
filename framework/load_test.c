/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:58:28 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/11 13:32:36 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_test(t_unit_test **list, char *name, f_p func)
{
	t_unit_test	*new;
	t_unit_test	*tmp;

	if (list && name && func)
	{
		if (!(new = malloc(sizeof(t_unit_test))))
			exit(42);
		new->test_name = name;
		new->test_func = func;
		new->next = NULL;
		if (!*list)
			*list = new;
		else
		{
			tmp = *list;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new;
		}
	}
}
