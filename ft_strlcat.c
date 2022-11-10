/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:08:23 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:56:56 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	l = i;
	while (src[k])
		k++;
	while (i < size - 1 && size != 0)
		dest[i++] = src[j++];
	dest[i] = '\0';
	if (size < l)
		return (k + size);
	return (k + l);
}
