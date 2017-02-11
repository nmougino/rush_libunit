/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:39:18 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/11 20:50:26 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int ft_strlen_launcher(void)
{
	t_unit_test *list;

	list = NULL;
	ft_printf("\033[1mFT_STRLEN\033[0m\n");
	load_test(&list, "Basic test", &ft_strlen_basic_test);
	//load_test(&list, "NULL test", &ft_strlen_null_test);
	load_test(&list, "Empty string", &ft_strlen_empty_string);
	return(launch_test(list));
}
