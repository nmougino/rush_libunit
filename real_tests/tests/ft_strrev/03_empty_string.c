/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_empty_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:34:01 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/12 20:28:04 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	ft_strrev_empty_string(void)
{
	if (strcmp(ft_strrev(""), ""))
		return (-1);
	else
		return (0);
}
