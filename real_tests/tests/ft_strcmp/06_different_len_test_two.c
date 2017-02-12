/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_different_len_test_two.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:15:50 by ahamouda          #+#    #+#             */
/*   Updated: 2017/02/12 18:21:40 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_strcmp_len_test_two(void)
{
	if (ft_strcmp("test", "test0") == strcmp("test", "test0"))
		return (0);
	else
		return (-1);
}
