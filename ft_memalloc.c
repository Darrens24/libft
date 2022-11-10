/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:50:40 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:48:36 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*recipe;

	recipe = malloc(sizeof(char) * size);
	if (!recipe)
		return (NULL);
	ft_bzero(recipe, size);
	return (recipe);
}
