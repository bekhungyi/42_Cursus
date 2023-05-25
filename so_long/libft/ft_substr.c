/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:36:53 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/05/18 03:14:50 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len2;
	char	*subs;

	i = 0;
	if (!s)
		return (0);
	len2 = ft_strlen(s);
	if (len2 < (size_t)start)
		return (ft_strdup(""));
	if (len2 < len)
		len = len2;
	subs = (char *)malloc(sizeof(char) * len + 1);
	if (!subs)
		return (0);
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
