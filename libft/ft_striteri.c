/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:05:50 by bouhammo          #+#    #+#             */
/*   Updated: 2024/01/03 22:33:52 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	unsigned int	k;

	if (!s || !f)
		return ;
	i = 0;
	k = ft_strlen(s);
	while (i < k)
	{
		f(i, s + i);
		i++;
	}
}
