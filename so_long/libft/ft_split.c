/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:37:42 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/05/18 02:56:10 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	**setup(char const *s, char c)
{
	char	**split;

	if (!s)
		return (0);
	split = (char **)malloc((countwords(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	start;
	size_t	end;
	size_t	i;

	split = setup(s, c);
	if (!split)
		return (0);
	start = 0;
	end = 0;
	i = 0;
	while (i < countwords(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		split[i] = ft_substr(s, start, end - start);
		start = end;
		i++;
	}
	split[i] = 0;
	return (split);
}
