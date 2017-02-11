/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:39:18 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/11 16:45:23 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "unit_test.h"

int ft_strlen_launcher(void)
{
	t_unit_test *testlist;

	ft_printf("FT_STRLEN\n");
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	load_test(&testlist, "Empty string", &empty_string);
	return(launch_tests(&testlist));
}
