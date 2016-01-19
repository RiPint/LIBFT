/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 21:23:33 by jerollin          #+#    #+#             */
/*   Updated: 2016/01/11 21:23:36 by jerollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;

	dst_size = 0;
	src_size = 0;
	while (size != 0 && *(dst + dst_size) != '\0')
	{
		dst_size++;
		size--;
	}
	if (size == 0)
		return (dst_size + ft_strlen(src));
	while (*src != '\0')
	{
		if (size != 1)
		{
			*(dst + dst_size) = *src;
			dst++;
			size--;
		}
		src++;
		src_size++;
	}
	*(dst + dst_size) = '\0';
	return (dst_size + src_size);
}
