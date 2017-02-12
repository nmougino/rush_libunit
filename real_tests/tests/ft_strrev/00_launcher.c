/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:39:18 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/12 20:26:50 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_strrev_launcher(void)
{
	t_unit_test *list;

	list = NULL;
	ft_printf("\033[1mFT_STRREV\033[0m\n");
	load_test(&list, "Basic test", &ft_strrev_basic_test);
	load_test(&list, "NULL test", &ft_strrev_null_test);
	load_test(&list, "Empty string", &ft_strrev_empty_string);
	return (launch_test(list));
}
