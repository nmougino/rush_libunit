/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:12:29 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/11 14:30:10 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	display_total(int *ret)
{
	printf("\n\tTotal performed test : %d\n\n", ret[0] + ret[1] + ret[2]
		+ ret[3] + ret[4]);
	if (ret[0])
		printf("\t\tOK     [ %d ]\n", ret[0]);
	if (ret[1])
		printf("\t\tKO     [ %d ]\n", ret[1]);
	if (ret[2])
		printf("\t\tSEGV   [ %d ]\n", ret[2]);
	if (ret[3])
		printf("\t\tBUSE   [ %d ]\n", ret[3]);
	if (ret[4])
		printf("\t\tUNKNOW [ %d ]\n", ret[4]);
}

int	launch_test(t_unit_test *list)
{
	int		ret[5];
	pid_t	pid;
	int		stat;

	bzero(ret, 5 * sizeof(int));
	while (list)
	{
		if ((pid = fork()) == -1)
			exit (1);
		if (!pid)
			exit (list->test_func());
		else
		{
			wait(&stat);
			ret[display_return(stat, list->test_name)]++;
		}
		list = list->next;
	}
	display_total(ret);
	return(ret[0] + ret[1] + ret[2] + ret[3] + ret[4] == ret[0] ? 0 : -1);
}

int	wina_test(void)
{
	return (0);
}

int	fail_test(void)
{
	return (-1);
}

int	segv_test(void)
{
	printf("%s", 2);
	return (-1);
}

int	buse_test(void)
{
	char *s = "salut";

	s[0] = 3;
	return (-1);
}

int main(void)
{
	t_unit_test *list;

	list = NULL;
	load_test(&list, "wina_test", &wina_test);
	load_test(&list, "fail_test", &fail_test);
	load_test(&list, "segv_test", &segv_test);
	load_test(&list, "buse_test", &buse_test);
	launch_test(list);
	return (0);
}
