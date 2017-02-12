/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:40:13 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/12 20:43:48 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_TESTS_H
# define UNIT_TESTS_H

# include "libunit.h"
# include "libft.h"
# include "limits.h"

/*
** FT_STRLEN
*/

int	ft_strlen_launcher(void);

int	ft_strlen_basic_test(void);
int	ft_strlen_null_test(void);
int	ft_strlen_empty_string(void);

/*
** FT_STRCMP
*/

int	ft_strcmp_launcher(void);

int	ft_strcmp_equal_test(void);
int	ft_strcmp_null_test(void);
int	ft_strcmp_different_test(void);
int	ft_strcmp_different_test_two(void);
int	ft_strcmp_len_test(void);
int	ft_strcmp_len_test_two(void);
int	ft_strcmp_null_test_two(void);
int	ft_strcmp_null_test_three(void);

/*
** FT_STRREV
*/

int	ft_strrev_launcher(void);

int	ft_strrev_basic_test(void);
int	ft_strrev_null_test(void);
int	ft_strrev_empty_string(void);

/*
** FT_ITOA
*/

int	ft_itoa_launcher(void);

int	ft_itoa_basic_test(void);
int	ft_itoa_negative_test(void);
int	ft_itoa_zero_test(void);
int	ft_itoa_min_test(void);
int	ft_itoa_max_test(void);

#endif
