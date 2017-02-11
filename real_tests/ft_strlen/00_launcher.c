/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:39:18 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/11 17:08:01 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "unit_test.h"

int ft_strlen_launcher(void)
{
	t_unit_test *list;

	list = NULL;
	ft_printf("FT_STRLEN\n");
	load_test(&list, "Basic test", &basic_test);
	load_test(&list, "NULL test", &null_test);
	load_test(&list, "Empty string", &empty_string);
	return(launch_tests(list));
}