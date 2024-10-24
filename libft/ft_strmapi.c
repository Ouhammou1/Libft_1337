/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:05:59 by bouhammo          #+#    #+#             */
/*   Updated: 2024/01/09 17:56:44 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		k;
	char	*ptr;
	int		i;

	if (!s || !f)
		return (NULL);
	k = ft_strlen(s);
	ptr = (char *)malloc((k + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
