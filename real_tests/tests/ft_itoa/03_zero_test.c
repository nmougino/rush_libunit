/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_zero_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:39:00 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/12 23:20:06 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_itoa_zero_test(void)
{
	const char	*str = ft_itoa(0);
	int			i;

	i = 0;
	if (strcmp(str, "0"))
		i = -1;
	return (i);
}
