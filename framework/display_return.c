/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_return.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:37:50 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/11 14:28:39 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	display_return(int stat, char *name)
{
	printf("\t> %s : ", name);
	if (WIFEXITED(stat))
	{
		printf("%s", WEXITSTATUS(stat) ? "KO\n" : "OK\n");
		return (WEXITSTATUS(stat) ? 1 : 0);
	}
	else if (stat == SIGSEGV)
	{
		printf("SEGV\n");
		return (2);
	}
	else if (stat == SIGBUS)
	{
		printf("BUSE\n");
		return (3);
	}
	else
	{
		printf("UNKNOWN (non-supported error)\n");
		return (4);
	}
}
