/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:07:53 by pleander          #+#    #+#             */
/*   Updated: 2024/04/17 12:28:16 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*s;	
	unsigned char		*d;
	size_t				i;

	if (src > dst)
		return (ft_memcpy(dst, src, len));
	d = dst;
	s = src;
	i = len;
	while (i > 0)
	{
		d[i - 1] = s[i - 1];
		i--;
	}
	return (dst);
}
