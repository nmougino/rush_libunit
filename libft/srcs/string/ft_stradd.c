/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/24 20:07:19 by nmougino          #+#    #+#             */
/*   Updated: 2016/10/19 16:53:02 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Concatene deux chaine et remplace la premiere par la chaine ainsi cree.
*/

char	*ft_stradd(char **s1, char const *s2)
{
	char	*ans;

	ans = ft_strjoin(*s1, s2);
	if (ans)
	{
		free(*s1);
		*s1 = ans;
	}
	return (ans);
}
