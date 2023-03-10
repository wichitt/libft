/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wamonvor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:21:57 by wamonvor          #+#    #+#             */
/*   Updated: 2023/02/18 14:22:00 by wamonvor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
This function is request 1 (int) argument for check the values is the alpha or the number  
*/
#include "libft.h"

int	ft_isalnum(int i)
{
	return (ft_isdigit(i) || ft_isalpha(i));
}
