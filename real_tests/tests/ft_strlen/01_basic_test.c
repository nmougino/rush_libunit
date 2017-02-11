/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:23:11 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/11 19:06:59 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_strlen_basic_test(void)
{
	if (ft_strlen("Cthulhu") == strlen("Cthulhu"))
		return (0);
	else
		return (-1);
}
