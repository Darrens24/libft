/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:05:48 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:48:43 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *redest, const void *resrc, int c, size_t size)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	dest = redest;
	src = resrc;
	i = 0;
	while ((i == 0 || src[i - 1] != (unsigned char)c) && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (i > 0 && src[i - 1] == (unsigned char)c)
		return (redest + i);
	return (NULL);
}
