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

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char		*convert_s1;
	const unsigned char		*convert_s2;

	i = 0;
	convert_s1 = (const unsigned char *)s1;
	convert_s2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (convert_s1[i] != convert_s2[i])
			return (convert_s1[i] - convert_s2[i]);
		i++;
	}
	return (0);
}
