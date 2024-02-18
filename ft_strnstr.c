/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:27:39 by bouhammo          #+#    #+#             */
/*   Updated: 2024/01/06 21:39:53 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0)
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len && haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j] && needle[j] != '\0' && (i
				+ j < len))
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)haystack + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
