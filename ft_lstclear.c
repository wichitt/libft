/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wamonvor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:23:22 by wamonvor          #+#    #+#             */
/*   Updated: 2023/02/27 15:02:09 by wamonvor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*node;

	if (!del || !lst || !*lst)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		node = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = node;
	}
	*lst = NULL;

}
