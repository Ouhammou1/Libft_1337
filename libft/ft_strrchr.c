/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:15:05 by bouhammo          #+#    #+#             */
/*   Updated: 2024/01/07 16:15:21 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = ft_strlen(s);
	while (j >= 0)
	{
		if (s[j] == (char)c)
		{
			return ((char *)(s + j));
		}
		j--;
	}
	if (!c)
		return ((char *)s + j);
	return (0);
}
