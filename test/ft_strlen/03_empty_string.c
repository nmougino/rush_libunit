/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_empty_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:34:01 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/11 16:38:46 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	empty_string(void)
{
	if (ft_strlen("") == strlen(""))
		return (0);
	else
		return (-1);
}
