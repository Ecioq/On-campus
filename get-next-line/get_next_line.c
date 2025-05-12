/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:15:06 by side-boe          #+#    #+#             */
/*   Updated: 2025/05/12 15:00:38 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*move_after_newline(char **stash, char *line)
{
	char	*new_line_pos;
	char	*new_stash;

	new_line_pos = ft_strchr(*stash, '\n');
	if (!new_line_pos)
	{
		free(*stash);
		*stash = NULL;
		return (NULL);
	}
	new_line_pos++;
	new_stash = ft_strdup(new_line_pos);
	free(*stash);
	*stash = new_stash;
	if (!line)
	{
		free(new_stash);
		new_stash = NULL;
	}
	return (new_stash);
}

char	*read_until_newline(char **stash, int fd)
{
	char	*buffer;
	char	*temp;
	ssize_t	bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (free(*stash), NULL);
	bytes_read = 1;
	while (!ft_strchr(*stash, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			free(*stash);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(*stash, buffer);
		free(*stash);
		*stash = temp;
	}
	free(buffer);
	return (*stash);
}

char	*extract_line(char *stash)
{
	int		i;
	char	*line;

	if (!stash || !*stash)
		return (NULL);
	i = 0;
	while (stash[i] != '\n' && stash[i])
		i++;
	line = malloc(sizeof (char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] != '\n' && stash[i])
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	stash = read_until_newline(&stash, fd);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = move_after_newline(&stash, line);
	return (line);
}
