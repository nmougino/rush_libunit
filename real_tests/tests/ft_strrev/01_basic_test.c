/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:23:11 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/12 20:27:35 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_strrev_basic_test(void)
{
	if (strcmp(ft_strrev("Cthulhu"), "uhluhtC"))
		return (-1);
	else
		return (0);
}
