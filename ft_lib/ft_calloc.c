/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnencini <daniele.nencini@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:28:35 by dnencini          #+#    #+#             */
/*   Updated: 2022/10/05 16:28:58 by dnencini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	total_size;

	tab = NULL;
	total_size = nmemb * size;
	tab = malloc(total_size);
	if (tab != NULL)
		ft_bzero(tab, total_size);
	return (tab);
}
