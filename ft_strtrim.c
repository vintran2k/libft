/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 12:34:10 by vintran           #+#    #+#             */
/*   Updated: 2021/01/05 15:49:18 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	len;

	res = NULL;
	if (!set && s1)
		res = ft_strdup(s1);
	else if (s1)
	{
		i = 0;
		len = ft_strlen(s1);
		if (len)
			len--;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (len >= 0 && ft_strchr(set, s1[len]))
			len--;
		res = ft_substr(s1, i, (len - i + 1));
	}
	return (res);
}
