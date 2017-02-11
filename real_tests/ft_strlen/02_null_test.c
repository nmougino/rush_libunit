/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:24:45 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/11 16:45:32 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_null_test(void)
{
	if (ft_strlen(NULL) && ft_strlen(NULL) != -1)
		return (-1);
	else
		return (0);
}
