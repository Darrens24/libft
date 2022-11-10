/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:44:08 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:49:26 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t				i;
	unsigned char		*destin;
	const unsigned char	*source;

	i = 0;
	destin = dest;
	source = src;
	if (destin < source)
	{
		while (i < size)
		{
			destin[i] = source[i];
			i++;
		}
	}
	else if (destin > source)
	{
		i = size;
		while (i > 0)
		{
			destin[i - 1] = source[i - 1];
			i--;
		}
	}
	return (dest);
}
