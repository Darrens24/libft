/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:38:21 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:57:29 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*recipe;
	size_t	i;

	recipe = malloc(sizeof(char) * (size + 1));
	if (!recipe)
		return (NULL);
	i = 0;
	while (i < size)
		recipe[i++] = '\0';
	return (recipe);
}
