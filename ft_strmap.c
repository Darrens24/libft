/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:48:34 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:57:14 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char(*f)(char))
{
	char	*recipe;
	size_t	size;
	size_t	i;

	size = ft_strlen(s);
	recipe = malloc(sizeof(char) * (size + 1));
	if (!recipe)
		return (NULL);
	i = 0;
	while (s[i])
	{
		recipe[i] = f(s[i]);
		i++;
	}
	recipe[i] = '\0';
	return (recipe);
}
