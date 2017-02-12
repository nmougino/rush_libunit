/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_different_test_two.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:05:32 by ahamouda          #+#    #+#             */
/*   Updated: 2017/02/12 18:08:44 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_strcmp_different_test_two(void)
{
	if (ft_strcmp("aab", "aaa") == strcmp("aab", "aaa"))
		return (0);
	else
		return (-1);
}
