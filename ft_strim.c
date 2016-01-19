/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 21:23:33 by jerollin          #+#    #+#             */
/*   Updated: 2016/01/11 21:56:49 by jerollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strim(char *s, char c)
{
	int		i;
	int		j;
	char	*cp;

	i = 0;
	j = ft_strlen(s);
	if (s[j - 1] == c)
		j -= 2;
	if (s[0] == c)
		i = 1;
	cp = ft_strsub(s, i, j);
	ft_strdel(&s);
	return (cp);
}
