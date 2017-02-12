/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:39:18 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/12 20:48:18 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_itoa_launcher(void)
{
	t_unit_test *list;

	list = NULL;
	ft_printf("\033[1mFT_ITOA\033[0m\n");
	load_test(&list, "Basic test", &ft_itoa_basic_test);
	load_test(&list, "Negative test", &ft_itoa_negative_test);
	load_test(&list, "Zero test", &ft_itoa_zero_test);
	load_test(&list, "Min test", &ft_itoa_min_test);
	load_test(&list, "Max test", &ft_itoa_max_test);
	return (launch_test(list));
}
