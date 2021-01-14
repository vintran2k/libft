/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 12:32:11 by vintran           #+#    #+#             */
/*   Updated: 2021/01/04 12:32:17 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1len;
	size_t	s2len;
	size_t	reslen;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	reslen = s1len + s2len;
	if (!(res = malloc(sizeof(char) * (reslen + 1))))
		return (NULL);
	ft_memcpy(res, s1, s1len);
	ft_memcpy(&res[s1len], s2, s2len);
	res[reslen] = '\0';
	return (res);
}
