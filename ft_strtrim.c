/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 13:00:28 by vintran           #+#    #+#             */
/*   Updated: 2020/09/08 13:05:56 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	beg;
	size_t	end;
	size_t	s1len;

	res = NULL;
	if (!set && s1)
		res = ft_strdup(s1);
	else if (s1)
	{
		beg = 0;
		s1len = ft_strlen(s1);
		end = s1len;
		if (s1len)
			end--;
		while (s1[beg] && ft_strchr(set, s1[beg]))
			beg++;
		while (end >= 0 && ft_strchr(set, s1[end]))
			end--;
		res = ft_substr(s1, beg, (end - beg + 1));
	}
	return (res);
}
