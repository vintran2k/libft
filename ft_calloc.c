/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 17:01:24 by vintran           #+#    #+#             */
/*   Updated: 2020/09/07 17:01:27 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *tab;

	tab = NULL;
	if (!(tab = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
