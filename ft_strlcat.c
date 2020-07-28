/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madorna- <madorna-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 19:03:06 by madorna-          #+#    #+#             */
/*   Updated: 2020/07/22 19:43:32 by madorna-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	total;

	total = ft_strlen(dest) + ft_strlen(src);
	if (dstsize <= ft_strlen(dest))
		return (ft_strlen(src) + dstsize);
	while (*dest)
		dest++;
	i = 0;
	while ((i < dstsize - (total - ft_strlen(src)) - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (total);
}
