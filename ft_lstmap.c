/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 22:29:18 by jerollin          #+#    #+#             */
/*   Updated: 2016/01/11 22:30:13 by jerollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *tmp;
	t_list *ptr;

	if (!lst || !(*f))
		return (NULL);
	if (!(ptr = (t_list *)malloc(sizeof(*ptr))))
		return (NULL);
	ptr = f(lst);
	tmp = ptr;
	lst = lst->next;
	while (lst)
	{
		list = f(lst);
		tmp->next = list;
		tmp = list;
		lst = lst->next;
	}
	tmp->next = NULL;
	return (ptr);
}
