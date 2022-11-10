/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <eleleux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:44:54 by eleleux           #+#    #+#             */
/*   Updated: 2022/11/10 10:02:44 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*recipe;

	recipe = malloc(sizeof(t_list));
	if (!recipe)
		return (NULL);
	recipe->content = (void *)content;
	recipe->next = NULL;
	return (recipe);
}
