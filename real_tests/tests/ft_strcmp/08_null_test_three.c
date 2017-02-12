/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_null_test_three.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:17:26 by ahamouda          #+#    #+#             */
/*   Updated: 2017/02/12 18:17:48 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_strcmp_null_test_three(void)
{
	if (ft_strcmp("lalala", NULL) == strcmp("lalala", NULL))
		return (0);
	else
		return (-1);
}
