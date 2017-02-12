/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_null_test_two.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:16:58 by ahamouda          #+#    #+#             */
/*   Updated: 2017/02/12 18:22:43 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_strcmp_null_test_two(void)
{
	if (ft_strcmp(NULL, "lala") == strcmp(NULL, "lala"))
		return (0);
	else
		return (-1);
}
