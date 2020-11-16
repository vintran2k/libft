/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 17:41:15 by vintran           #+#    #+#             */
/*   Updated: 2020/09/07 17:45:45 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len > slen)
		len = slen;
	if (start > slen)
		start = (unsigned int)slen;
	if (start + len > slen)
		len = slen - start;
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_memmove(res, s + start, len);
	res[len] = '\0';
	return (res);
}
