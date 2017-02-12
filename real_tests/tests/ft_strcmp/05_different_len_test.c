/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_different_len_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamouda <ahamouda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:08:51 by ahamouda          #+#    #+#             */
/*   Updated: 2017/02/12 18:15:08 by ahamouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_strcmp_len_test(void)
{
	if (ft_strcmp("test0", "test") == strcmp("test0", "test"))
		return (0);
	else
		return (-1);
}
