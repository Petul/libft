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
	int	i;

	count = 0;
	i = 0;
	while (i < (int)ft_strlen(s))
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

	len = (int)ft_strlen(s);
	printf("splits in \"%s\": %d\n:", s, count_splits(s, c));
	start = 0;
	end = 0;
	//while (end < len)
	//{
	//	if (s[end] == c)
	//	{
	//		
	//	}
	//}
	return (NULL);
}
