/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:45:30 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:51:14 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*recipe;
	int		i;

	i = 0;
	while (src[i])
		i++;
	recipe = malloc(sizeof(char) * (i + 1));
	if (!recipe)
		return (NULL);
	i = 0;
	while (src[i])
	{
		recipe[i] = src[i];
		i++;
	}
	recipe[i] = '\0';
	return (recipe);
}
