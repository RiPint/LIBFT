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

static int	check_size(int n)
{
	int		size;

	size = 1;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n > 9)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		size;
	int		is_neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_neg = 0;
	size = check_size(n);
	if ((s = (char *)malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	size = check_size(n);
	if (n < 0)
	{
		is_neg = 1;
		s[0] = '-';
		n = -n;
	}
	s[size] = '\0';
	while (size > is_neg)
	{
		s[size - 1] = n % 10 + '0';
		n /= 10;
		size--;
	}
	return (s);
}
