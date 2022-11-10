/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 09:10:58 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:57:41 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int charset)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)str;
	while (string[i])
		i++;
	i -= 1;
	while (i >= 0)
	{
		if (string[i] == charset)
			return (string + i);
		i--;
	}
	return (NULL);
}
