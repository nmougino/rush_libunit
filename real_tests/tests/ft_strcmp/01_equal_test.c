/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_equal_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:01:25 by ahamouda          #+#    #+#             */
/*   Updated: 2017/02/12 18:20:49 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_strcmp_equal_test(void)
{
	if (ft_strcmp("test", "test") == strcmp("test", "test"))
		return (0);
	else
		return (-1);
}
