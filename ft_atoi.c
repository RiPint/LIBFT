/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 21:23:33 by jerollin          #+#    #+#             */
/*   Updated: 2016/01/11 22:34:14 by jerollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			value;
	int			is_negative;

	is_negative = 1;
	value = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-')
	{
		is_negative = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			value = (value * 10) + ((int)*str - '0');
		else
			return (is_negative * value);
		str++;
	}
	return (is_negative * value);
}
