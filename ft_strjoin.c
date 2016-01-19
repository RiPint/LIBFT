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

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	size_s1;
	size_t	size_s2;
	char	*dst;

	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (dst == NULL)
		return (NULL);
	while (++i < size_s1)
		dst[i] = s1[i];
	while (++j < size_s2)
		dst[i++] = s2[j];
	dst[i] = '\0';
	return (dst);
}
