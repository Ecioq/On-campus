/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 08:59:47 by side-boe          #+#    #+#             */
/*   Updated: 2025/05/02 13:41:24 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!src || !dest)
		return (NULL);
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	size_t	len;
	char	*str2;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	len = ft_strlen(str);
	str2 = (char *)malloc((len + 1) * sizeof (char));
	if (!str2)
		return (NULL);
	while (str[i])
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

char	*ft_strjoin(char *str1, char *str2)
{
	size_t	len;
	char	*str3;
	int		i;

	i = 0;
	if (!str1 && !str2)
		return (NULL);
	if (!str1)
		return (ft_strdup(str2));
	if (!str2)
		return (ft_strdup(str1));
	len = ft_strlen(str1) + ft_strlen(str2);
	str3 = (char *)malloc((len + 1) * sizeof (char));
	if (str3 == NULL)
		return (NULL);
	while (str1[i])
	{
		str3[i] = str1[i];
		i++;
	}
	str3[i] = '\0';
	ft_strcat(str3, str2);
	return (str3);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s) + 1;
	while (i > 0)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
		i--;
	}
	return (NULL);
}
