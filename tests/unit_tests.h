/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:40:13 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/11 18:47:33 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_TESTS_H
# define UNIT_TESTS_H

# include "libunit.h"

int launcher(void);

int	ok_test(void);
int	fail_test(void);
int	segv_test(void);
int	buse_test(void);

#endif
