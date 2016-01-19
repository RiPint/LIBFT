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
#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char	*dest;
	char	*src;

	dest = (char*)s1;
	src = (char*)s2;
	while (n--)
	{
		*dest = *src;
		if (*src == c)
			return (++dest);
		dest++;
		src++;
	}
	return (NULL);
}
