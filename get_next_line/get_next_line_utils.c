/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 01:47:31 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/05/17 18:36:11 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	count_until_n(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
		if (str[i - 1] == '\n')
			break ;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
	}
	return (i);
}

char	*ft_strjoin(char *save, char *buf, int r)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = malloc(sizeof(char) * (ft_strlen(save) + r + 1));
	if (!res)
		return (NULL);
	if (save)
	{
		while (save[i])
		{
			res[i] = save[i];
			i++;
		}
		free(save);
	}
	while (j < r)
		res[i++] = buf[j++];
	res[i] = '\0';
	return (res);
}

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	if (!str || !str[i])
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
