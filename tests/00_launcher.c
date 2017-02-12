/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:05:10 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/11 18:45:56 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	launcher(void)
{
	t_unit_test *list;

	list = NULL;
	load_test(&list, "ok_test", &ok_test);
	load_test(&list, "fail_test", &fail_test);
	load_test(&list, "seg_fault_test", &segv_test);
	load_test(&list, "bus_error_test", &buse_test);
	return (launch_test(list));
}
