/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:33:59 by pleander          #+#    #+#             */
/*   Updated: 2024/04/18 14:39:04 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && (i + ft_strlen(needle) < len))
	{
		if (ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
