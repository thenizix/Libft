/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnencini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:40:01 by dnencini          #+#    #+#             */
/*   Updated: 2022/10/06 11:40:05 by dnencini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*begin;

	if (new != NULL)
	{
		begin = *alst;
		if (begin == NULL)
			*alst = new;
		else
		{
			while (begin->next != NULL)
				begin = begin->next;
			begin->next = new;
		}
	}
}
