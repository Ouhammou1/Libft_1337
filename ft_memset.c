/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:19:13 by bouhammo          #+#    #+#             */
/*   Updated: 2024/01/08 21:56:20 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	a;

	i = 0;
	ptr = (unsigned char *)b;
	a = (unsigned char)c;
	while (i < len)
	{
		ptr[i] = a;
		i++;
	}
	return (b);
}
