/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 12:31:58 by vintran           #+#    #+#             */
/*   Updated: 2021/01/04 12:32:03 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	slen;

	slen = ft_strlen(s);
	if (!(dst = malloc(sizeof(char) * (slen + 1))))
		return (NULL);
	ft_memcpy(dst, s, slen);
	dst[slen] = '\0';
	return (dst);
}
