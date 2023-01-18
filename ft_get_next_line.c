/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserpe <fserpe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:45:14 by fserpe            #+#    #+#             */
/*   Updated: 2023/01/18 14:26:45 by fserpe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*gnl_clean_mem(char *mem)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (mem[i] && mem[i] != '\n')
		i++;
	if (!mem[i])
	{
		free(mem);
		return (NULL);
	}
	temp = malloc(sizeof(char) * ((int)ft_strlen(mem) + 1 - i));
	if (!temp)
		return (NULL);
	i++;
	j = 0;
	while (mem[i])
		temp[j++] = mem[i++];
	temp[j] = '\0';
	free(mem);
	return (temp);
}

char	*gnl_line(char *mem)
{
	char	*line;
	int		i;

	i = 0;
	if (!mem[i])
		return (NULL);
	while (mem[i] && mem[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (mem[i] && mem[i] != '\n')
	{
		line[i] = mem[i];
		i++;
	}
	if (mem[i] == '\n')
	{
		line[i] = mem[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*gnl_read_file(char *mem, int fd)
{
	char	*buf;
	int		bytes_read;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr_gnl(mem, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[bytes_read] = '\0';
		mem = ft_strjoin_gnl(mem, buf);
	}
	free(buf);
	return (mem);
}

char	*get_next_line(int fd)
{
	static char	*mem[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 1023)
		return (NULL);
	mem[fd] = gnl_read_file(mem[fd], fd);
	if (!mem[fd])
		return (NULL);
	line = gnl_line(mem[fd]);
	mem[fd] = gnl_clean_mem(mem[fd]);
	return (line);
}
