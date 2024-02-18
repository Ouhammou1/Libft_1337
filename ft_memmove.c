/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 00:36:17 by bouhammo          #+#    #+#             */
/*   Updated: 2024/01/06 22:43:53 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest_t;
	char	*src_t;
	size_t	i;

	dest_t = (char *)dst;
	src_t = (char *)src;
	i = 0;
	if (!dest_t && !src_t)
		return (0);
	else if (dest_t > src_t)
	{
		while (len-- > 0)
			dest_t[len] = src_t[len];
	}
	else
	{
		while (len > i)
		{
			dest_t[i] = src_t[i];
			i++;
		}
	}
	return (dst);
}
