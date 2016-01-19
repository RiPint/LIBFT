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

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*tmp_s2;
	size_t	i;

	i = 0;
	tmp_s2 = (char *)s2;
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 != '\0' && *tmp_s2 != '\0' && i < n)
	{
		if (*s1 == *tmp_s2)
			tmp_s2++;
		s1++;
		i++;
	}
	if (*tmp_s2 == '\0')
		return ((char *)s1 - ft_strlen(s2));
	return (NULL);
}
