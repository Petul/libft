/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:53:05 by pleander          #+#    #+#             */
/*   Updated: 2024/04/19 10:38:47 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	start = 0;
	while (ft_strchr(set, s1[start]) != NULL && s1[start])
		start++;
	end = start;
	while (ft_strchr(set, s1[end]) == NULL)
		end++;
	return (ft_substr(s1, start, end - start));
}
