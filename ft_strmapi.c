/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:09:44 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:57:19 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*recipe;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s[i])
		i++;
	recipe = malloc(sizeof(char) * (i + 1));
	if (!recipe)
		return (NULL);
	j = 0;
	while (j < i)
	{
		recipe[j] = f(j, s[j]);
		j++;
	}
	recipe[j] = '\0';
	return (recipe);
}
