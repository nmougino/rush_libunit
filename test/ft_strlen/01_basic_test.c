/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:23:11 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/11 16:25:13 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	basic_test(void)
{
	if (ft_strlen("Cthulhu") == strlen("Cthulhu"))
		return (0);
	else
		return (-1);
}
