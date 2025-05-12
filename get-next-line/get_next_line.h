/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:03:31 by side-boe          #+#    #+#             */
/*   Updated: 2025/05/12 14:40:14 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1 
# endif

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strdup(char *str);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_strchr(const char *s, int c);
char	*extract_line(char *stash);
char	*get_next_line(int fd);
char	*read_until_newline(char **stash, int fd);
char	*move_after_newline(char **stash, char *line);
#endif
