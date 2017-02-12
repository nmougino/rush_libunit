/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:01:32 by ahamouda          #+#    #+#             */
/*   Updated: 2017/02/12 18:17:58 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_strcmp_launcher(void)
{
	t_unit_test *list;

	list = NULL;
	ft_printf("\033[1mFT_STRCMP\033[0m\n");
	load_test(&list, "equal strings", &ft_strcmp_equal_test);
	load_test(&list, "NULL test 1", &ft_strcmp_null_test);
	load_test(&list, "different strings 1", &ft_strcmp_different_test);
	load_test(&list, "different strings 2", &ft_strcmp_different_test_two);
	load_test(&list, "longer string 1", &ft_strcmp_len_test);
	load_test(&list, "longer string 2", &ft_strcmp_len_test_two);
	load_test(&list, "NULL test 2", &ft_strcmp_null_test_two);
	load_test(&list, "NULL test 3", &ft_strcmp_null_test_three);
	return (launch_test(list));
}
