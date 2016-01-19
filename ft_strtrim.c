/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 21:23:33 by jerollin          #+#    #+#             */
/*   Updated: 2016/01/14 17:35:47 by jerollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_s(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i == ft_strlen(s) ? 1 : 0);
}

char		*ft_strtrim(char const *s)
{
	char	*dst;
	size_t	start;
	size_t	end;

	if (s == NULL)
		return (NULL);
	end = ft_strlen(s) - 1;
	start = 0;
	if (check_s(s) == 1)
		return ("");
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	end++;
	dst = ft_strsub(s, start, end - start);
	if (dst == NULL)
		return (NULL);
	return (dst);
}
