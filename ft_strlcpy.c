/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:45:32 by pleander          #+#    #+#             */
/*   Updated: 2024/04/18 12:37:31 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	n;

	src_len = ft_strlen(src);
	n = 1;
	while (src[n - 1] && n < dstsize)
	{
		dst[n - 1] = src[n - 1];
		n++;
	}
	dst[n - 1] = '\0';
	return (src_len);
}
