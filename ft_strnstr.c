/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:33:59 by pleander          #+#    #+#             */
/*   Updated: 2024/04/23 14:02:06 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	h_len;
	size_t	n_len;

	h_len = ft_strlen(haystack);
	n_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < h_len && (i + n_len <= len))
	{
		if (ft_strncmp(haystack + i, needle, n_len) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
