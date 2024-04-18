/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:04:13 by pleander          #+#    #+#             */
/*   Updated: 2024/04/18 16:29:14 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t 	size;
	size_t	i;
	char	*str;	

	size = len - (ft_strlen(s) - (s + len));
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);	
	i = 0;
	while (i < size)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
