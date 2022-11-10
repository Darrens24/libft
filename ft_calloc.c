/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:46:06 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:47:47 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*recipe;
	size_t	i;

	recipe = malloc(count * size);
	if (!recipe)
		return (NULL);
	i = 0;
	while (i < count * size)
		recipe[i++] = '\0';
	return ((void *)(recipe));
}
