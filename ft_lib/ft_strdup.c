/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnencini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:28:23 by dnencini          #+#    #+#             */
/*   Updated: 2022/10/06 11:28:52 by dnencini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len_str;

	len_str = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len_str + 1));
	if (str != NULL)
	{
		ft_memcpy(str, s, len_str);
		str[len_str] = '\0';
	}
	return (str);
}
