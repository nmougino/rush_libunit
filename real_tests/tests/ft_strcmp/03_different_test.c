/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_different_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:03:23 by ahamouda          #+#    #+#             */
/*   Updated: 2017/02/12 18:04:03 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_strcmp_different_test(void)
{
	if (ft_strcmp("aaa", "aab") == strcmp("aaa", "aab"))
		return (0);
	else
		return (-1);
}
