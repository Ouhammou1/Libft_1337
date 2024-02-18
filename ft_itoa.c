/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:44:38 by bouhammo          #+#    #+#             */
/*   Updated: 2024/01/07 15:37:45 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	nbr_liter(int n)
{
	int			len;
	long int	p;

	len = 0;
	p = n;
	if (p < 0)
	{
		p = p * (-1);
		len = 1;
	}
	if (p == 0)
	{
		len = 1;
	}
	while (p != 0)
	{
		p = p / 10;
		len++;
	}
	return (len);
}

static int	check_signal(int n)
{
	int	q;

	if (n < 0)
		q = 1;
	else if (n == 0)
		q = 2;
	else
	{
		return (0);
	}
	return (q);
}

char	*ft_itoa(int k)
{
	int				len;
	char			*ptr;
	unsigned int	p;

	len = nbr_liter(k);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[len--] = '\0';
	if (check_signal(k) == 1)
		ptr[0] = '-';
	if (check_signal(k) == 2)
		ptr[0] = '0';
	if (k < 0)
		k = k * (-1);
	p = k;
	while (p != 0)
	{
		ptr[len] = ((char)(p % 10) + 48);
		p = p / 10;
		len--;
	}
	return (ptr);
}
