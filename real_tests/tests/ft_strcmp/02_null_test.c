/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:01:18 by ahamouda          #+#    #+#             */
/*   Updated: 2017/02/12 18:02:49 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_strcmp_null_test(void)
{
	if (ft_strcmp(NULL, NULL) == strcmp(NULL, NULL))
		return (0);
	else
		return (-1);
}
