/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 22:30:56 by jerollin          #+#    #+#             */
/*   Updated: 2016/01/14 19:20:18 by jerollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*nlist;
	void		*ncontent;

	if (!(nlist = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		if (!(ncontent = malloc(sizeof(*ncontent) * content_size + 1)))
			return (NULL);
		ft_memcpy(ncontent, content, content_size);
	}
	else
	{
		ncontent = NULL;
		content_size = 0;
	}
	nlist->content = ncontent;
	nlist->content_size = content_size;
	nlist->next = NULL;
	return (nlist);
}
