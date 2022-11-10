/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:47:51 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:48:54 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memblock, int schar, size_t size)
{
	size_t	i;
	char	*block;

	i = 0;
	block = (char *)memblock;
	while (i < size)
	{
		if (block[i] == schar)
			return (block + i);
		i++;
	}
	return (NULL);
}
