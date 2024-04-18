/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:39:51 by pleander          #+#    #+#             */
/*   Updated: 2024/04/18 13:12:48 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	n;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	n = 1;
	while (src[n - 1] && (dst_len + n) < dstsize)
	{
		dst[dst_len + n - 1] = src[n - 1];
		n++;
	}
	dst[dst_len + n - 1] = '\0';
	return (dst_len + src_len);
}
