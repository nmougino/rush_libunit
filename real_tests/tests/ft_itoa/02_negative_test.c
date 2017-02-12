/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_negative_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:36:57 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/12 20:46:28 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_itoa_negative_test(void)
{
	if (strcmp(ft_itoa(-12345), "-12345"))
		return (-1);
	else
		return (0);
}