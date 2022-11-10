/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 09:30:52 by eleleux           #+#    #+#             */
/*   Updated: 2022/10/27 10:50:50 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int charset)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)str;
	while (string[i])
	{
		if (string[i] == charset)
			return (string + i);
		i++;
	}
	return (NULL);
}
