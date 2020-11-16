/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 17:04:24 by vintran           #+#    #+#             */
/*   Updated: 2020/09/07 17:04:25 by vintran          ###   ########.fr       */
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
