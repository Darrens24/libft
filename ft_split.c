/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:36:26 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:50:43 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char w, char c)
{
	if (w == c)
		return (1);
	return (0);
}

static int	count_splits(char const *s, char c)
{
	int	count;
	int	i;

	count = 1;
	i = 0;
	while (is_sep(s[i], c))
		i++;
	while (s[i])
	{
		if (is_sep(s[i], c) && !is_sep(s[i + 1], c))
			count++;
		i++;
	}
	i -= 1;
	if (is_sep(s[i], c))
		count--;
	return (count);
}

static int	elem_size(char const *s, char c, int start)
{
	int	i;

	i = 0;
	while (s[i] && !is_sep(s[start++], c))
		i++;
	return (i);
}

static char	*duplicate(char const *s, char c, int start)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (elem_size(s, c, start) + 1));
	if (!dest)
		return (NULL);
	while (s[start] && !is_sep(s[start], c))
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**recipe;
	int		i;
	int		start;
	int		end;

	recipe = malloc(sizeof(char *) * (count_splits(s, c) + 1));
	if (!recipe)
		return (NULL);
	start = 0;
	i = 0;
	while (i < count_splits(s, c))
	{
		while (s[start] && is_sep(s[start], c))
			start++;
		recipe[i] = duplicate(s, c, start);
		end = elem_size(s, c, start);
		start += end;
		i++;
	}
	recipe[i] = NULL;
	return (recipe);
}
