/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 09:52:34 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:57:47 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*recipe;
	int		i;
	int		j;

	i = 0;
	while (s1[i])
		i++;
	recipe = malloc(sizeof(char) * (i + 1));
	if (!recipe)
		return (NULL);
	i = 0;
	while (is_set(s1[i], set))
		i++;
	j = 0;
	while (s1[i])
		recipe[j++] = s1[i++];
	j -= 1;
	i -= 1;
	while (is_set(s1[i--], set))
		recipe[j--] = '\0';
	return (recipe);
}
