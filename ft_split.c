/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:45:50 by pleander          #+#    #+#             */
/*   Updated: 2024/04/19 12:56:06 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static int	count_splits(char const *s, char c)
{
	int	count;
	int	len;
	int	i;

	count = 0;
	i = 0;
	len = (int)ft_strlen(s);
	if (len == 0)
	       return (0);
	if (s[i] != c && i == 0)
		count++;
	while (i < len - 1)
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int	start;
	int	end;
	int len;
	char	**splits;

	splits = malloc(sizeof(char *) * (count_splits(s, c) + 1));
	len = (int)ft_strlen(s);
	start = 0;
	end = 0;
	while (end < len)
	{
		if (s[end] == c)
		{

		}
	}
	return (NULL);
}
