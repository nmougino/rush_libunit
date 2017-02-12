/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:12:29 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/12 23:04:18 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	display_total(int *ret)
{
	ft_putendl("");
	if (ret[0])
		ft_printf("%15s [ %d ]  ", UNIT_OK, ret[0]);
	if (ret[1])
		ft_printf("%15s [ %d ]  ", UNIT_KO, ret[1]);
	if (ret[2])
		ft_printf("%15s [ %d ]  ", UNIT_SEGV, ret[2]);
	if (ret[3])
		ft_printf("%15s [ %d ]  ", UNIT_BUSE, ret[3]);
	if (ret[4])
		ft_printf("UNKNOW [ %d ]", ret[4]);
	ft_putendl("");
}

int			launch_test(t_unit_test *list)
{
	int			ret[5];
	pid_t		pid;
	int			stat;
	t_unit_test *tmp;

	bzero(ret, 5 * sizeof(int));
	while (list)
	{
		tmp = list;
		if ((pid = fork()) == -1)
			exit(1);
		if (!pid)
			exit(list->f());
		else
		{
			wait(&stat);
			ret[display_return(stat, list->test_name)]++;
		}
		list = list->next;
		free(tmp);
	}
	display_total(ret);
	return (ret[0] + ret[1] + ret[2] + ret[3] + ret[4] == ret[0] ? 0 : -1);
}
