/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:47:45 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:48:30 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n)
{
	int	size;

	size = 0;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char	*itoa_is_neg(int n)
{
	char	*recipe;
	int		size;

	size = get_size(n);
	n *= (-1);
	recipe = malloc(sizeof(char) * (size + 2));
	if (!recipe)
		return (NULL);
	recipe[size + 1] = '\0';
	while (size > 0)
	{
		recipe[size--] = (n % 10) + '0';
		n /= 10;
	}
	recipe[0] = '-';
	return (recipe);
}

static char	*itoa_is_pos(int n)
{
	char	*recipe;
	int		size;

	size = get_size(n);
	recipe = malloc(sizeof(char) * (size + 1));
	if (!recipe)
		return (NULL);
	recipe[size] = '\0';
	while (size > 0)
	{
		recipe[--size] = (n % 10) + '0';
		n /= 10;
	}
	return (recipe);
}

char	*ft_itoa(int n)
{
	char	*recipe;

	if (n == 0)
		return ("0");
	else if (n == -2147483648)
		return ("-2147483648");
	else if (n < 0)
		recipe = itoa_is_neg(n);
	else
		recipe = itoa_is_pos(n);
	return (recipe);
}
