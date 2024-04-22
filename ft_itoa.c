/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:05:52 by pleander          #+#    #+#             */
/*   Updated: 2024/04/22 15:33:28 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

static void	convert(int n, char *str, int sign)
{
	char	c;

	if (sign < 0)
		if (n < (9 / sign))
			convert(n / 10, str, sign);
	if (sign > 0)
		if (n > (9 / sign))
			convert(n / 10, str, sign);
	c = (n % 10) * sign + '0';
	str[ft_strlen(str)] = c;
}

static size_t	count(int n, int sign)
{
	size_t	c;

	c = 1;
	while ((n / 10) * sign > 9)
	{
		c++;
		n = n / 10;
	}
	c++;
	if (sign < 0)
		c++;
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	int		sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	size = count(n, sign) + 1;
	str = ft_calloc(size, sizeof(char));
	if (!str)
		return (NULL);
	if (sign < 0)
		str[0] = '-';
	convert(n, str, sign);
	return (str);
}