/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnencini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:29:58 by dnencini          #+#    #+#             */
/*   Updated: 2022/10/06 11:30:00 by dnencini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*block;

	block = (t_list *)malloc(sizeof(t_list));
	if (block != NULL)
	{
		block->content = content;
		block->next = NULL;
	}
	return (block);
}
