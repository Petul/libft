/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:52:59 by pleander          #+#    #+#             */
/*   Updated: 2024/04/17 12:26:23 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*t;
	unsigned char		p;
	size_t				i;

	t = s;
	p = c;
	i = 0;
	while (i < n)
	{
		if (c == t[i])
			return ((void *)(t + i));
		i++;
	}
	return (NULL);
}
