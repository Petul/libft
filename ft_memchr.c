/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:52:59 by pleander          #+#    #+#             */
/*   Updated: 2024/04/23 13:42:25 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*t;
	size_t				i;

	t = s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == t[i])
			return ((void *)(t + i));
		i++;
	}
	return (NULL);
}
