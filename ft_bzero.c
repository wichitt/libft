/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wamonvor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:21:27 by wamonvor          #+#    #+#             */
/*   Updated: 2023/02/27 11:51:24 by wamonvor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Use the bzero Function to Zero Out the Memory Region
!s check s is NULL or not 
return ; is mean return 0
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}
