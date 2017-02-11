/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_return.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:37:50 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/11 17:56:36 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	display_return(int stat, char *name)
{
	ft_printf("     * %s : ", name);
	if (WIFEXITED(stat))
	{
		ft_printf("%s\n", WEXITSTATUS(stat) ? UNIT_KO : UNIT_OK);
		return (WEXITSTATUS(stat) ? 1 : 0);
	}
	else if (stat == SIGSEGV)
	{
		ft_printf("%s\n", UNIT_SEGV);
		return (2);
	}
	else if (stat == SIGBUS)
	{
		ft_printf("%s\n", UNIT_BUSE);
		return (3);
	}
	ft_printf("%sUNKNOWN (non-supported error)%s\n", "\033[33m", "\033[0m");
	return (4);
}
