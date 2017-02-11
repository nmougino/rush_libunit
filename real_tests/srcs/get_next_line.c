/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 21:07:24 by nmougino          #+#    #+#             */
/*   Updated: 2016/10/29 17:53:21 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_fillline(char *buftab, char **line, int param)
{
	size_t	i;

	i = 0;
	while (buftab[i] && buftab[i] != '\n')
		i++;
	if (buftab[i] == '\n' || param == 1)
	{
		*line = ft_strnew(i);
		ft_strncpy(*line, buftab, i);
		ft_memmove(buftab, buftab + i + 1, ft_strlen(buftab + i));
		return (1);
	}
	return (0);
}

static void	*ft_bufjoin(char **buftab, char *ptr)
{
	char	*tmp;

	tmp = ft_strjoin(*buftab, ptr);
	ft_strdel(buftab);
	free(ptr);
	*buftab = tmp;
	return (NULL);
}

int			get_next_line(int const fd, char **line)
{
	static char	*buftab[1024];
	char		*ptr;
	int			i;

	if (!line || fd < 0 || fd >= 1024)
		return (-1);
	while (1)
	{
		if (buftab[fd] && *buftab[fd] && ft_fillline(buftab[fd], line, 0) == 1)
			return (1);
		ptr = ft_strnew(GNL_BUFF_SIZE);
		if ((i = (int)read(fd, ptr, GNL_BUFF_SIZE)) <= 0)
		{
			if (buftab[fd] && *buftab[fd])
			{
				ft_fillline(buftab[fd], line, 1);
				ft_strdel(buftab + fd);
				return (1);
			}
			return (i);
		}
		(buftab[fd]) ? ft_bufjoin(buftab + fd, ptr) : (buftab[fd] = ptr);
	}
}
