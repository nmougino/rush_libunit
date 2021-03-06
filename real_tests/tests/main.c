/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:50:28 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/12 20:44:33 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_tests.h"

int	main(void)
{
	int	tab[2];

	ft_bzero(tab, 2 * sizeof(int));
	tab[ft_strlen_launcher() + 1]++;
	tab[ft_strcmp_launcher() + 1]++;
	tab[ft_strrev_launcher() + 1]++;
	tab[ft_itoa_launcher() + 1]++;
	ft_printf("%d functionnal - %d crashing - %d total\n", tab[1], tab[0],
	tab[0] + tab[1]);
	return (tab[0] ? -1 : 0);
}
