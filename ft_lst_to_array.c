/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 21:23:33 by jerollin          #+#    #+#             */
/*   Updated: 2016/01/11 21:49:59 by jerollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_lst_to_array(t_list *lst)
{
	t_list	*tmp;
	char	**arr;
	int		i;
	int		j;

	j = 0;
	i = 0;
	tmp = lst;
	while (tmp)
	{
		ft_putendl(tmp->s);
		tmp = tmp->next;
		i++;
	}
	arr = (char **)malloc(sizeof(char*) * (i + 1));
	while (lst)
	{
		arr[j] = ft_strdup(lst->s);
		j++;
		lst = lst->next;
	}
	arr[j] = NULL;
	return (arr);
}
