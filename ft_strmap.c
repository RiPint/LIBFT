/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 21:23:33 by jerollin          #+#    #+#             */
/*   Updated: 2016/01/14 18:15:36 by jerollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*buff;
	int		i;

	i = 0;
	if (!(buff = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (*s != '\0')
	{
		*buff = f(*s);
		s++;
		buff++;
		i++;
	}
	return (buff - i);
}
