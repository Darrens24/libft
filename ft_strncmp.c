/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:28:39 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:57:23 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	i = 0;
	if (str1[i] == 0 && str2[i] == 0)
		return (0);
	while (size > 1 && str1[i] == str2[i])
	{
		i++;
		size--;
	}
	return (str1[i] - str2[i]);
}
