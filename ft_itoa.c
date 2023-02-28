/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wamonvor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:20:25 by wamonvor          #+#    #+#             */
/*   Updated: 2023/02/28 13:29:43 by wamonvor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	check_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ptr;
	long	numb;

	len = check_len(n);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[len] = '\0';
	numb = (long)n;
	if (n == 0)
		ptr[0] = '0';
	numb = (long)n;
	if (numb < 0)
	{
		ptr[0] = '-';
		numb = numb * -1;
	}
	while (numb > 0)
	{
		len--;
		ptr[len] = numb % 10 + 48;
		numb = numb / 10;
	}
	return (ptr);
}
