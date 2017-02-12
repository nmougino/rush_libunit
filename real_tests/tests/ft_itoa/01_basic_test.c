/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:36:57 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/12 23:25:49 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_itoa_basic_test(void)
{
	char		*str;
	int			i;

	str = ft_itoa(12345);
	i = 0;
	if (strcmp(str, "12345"))
		i = -1;
	free(str);
	return (i);
}
