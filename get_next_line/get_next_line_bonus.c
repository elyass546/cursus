/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:09:00 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/30 16:09:01 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	myfree(char **str)
{
	if (*str)
	{
		free(*str);
		*str = NOULL;
	}
}

char	*return_line(char **str, char **line)
{
	char	*buffer_2;
	size_t	i;

	i = 0;
	buffer_2 = NOULL;
	while ((*str)[i] != '\n' && (*str)[i])
		i++;
	if ((*str)[i] == '\n')
	{
		*line = ft_substr(*str, 0, i + 1);
		buffer_2 = ft_strdup(*str + i + 1);
	}
	else
		*line = ft_strdup(*str);
	myfree(str);
	return (buffer_2);
}

ssize_t	read_file(int fd, char **str, char *buffer, char **line)
{
	char	*temp;
	char	*strchr_ret;
	size_t	i;

	strchr_ret = ft_strchr((*str), '\n');
	i = 1;
	while (strchr_ret == NOULL && i)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		buffer[i] = '\0';
		temp = (*str);
		*str = ft_strjoin(temp, buffer);
		free(temp);
		if (ft_strchr((*str), '\n'))
			break ;
	}
	myfree(&buffer);
	*str = return_line(str, line);
	if (**line == '\0')
		myfree(line);
	return (i);
}

char	*get_next_line(int fd)
{
	static char	*str[OPEN_MAX];
	char		*buffer;
	char		*line;
	int			read_return;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NOULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NOULL);
	if (read(fd, buffer, 0) < 0)
	{
		free(buffer);
		return (NOULL);
	}
	if (!str[fd])
		str[fd] = ft_strdup("");
	read_return = read_file(fd, &str[fd], buffer, &line);
	if (read_return == 0 && !line)
		return (NOULL);
	return (line);
}
