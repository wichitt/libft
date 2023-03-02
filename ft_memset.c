/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wamonvor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:26:28 by wamonvor          #+#    #+#             */
/*   Updated: 2023/02/28 13:27:48 by wamonvor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
memset() is used to fill a block of memory with a particular value.
it will be write len bytes of value c to the string s.
unsigned char	*p; ---> used to declare variables Store only positive integer values. because mem address is positive integer 
*/
#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (len--)
		*p++ = (unsigned char)c;
	return (s);
}
