/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:45:50 by pleander          #+#    #+#             */
/*   Updated: 2024/04/22 13:01:32 by pleander         ###   ########.fr       */
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

static void	do_splitting(char **splits, char *trimmed, char c, int n_splits)
{
	int	start;
	int	end;
	int	len;
	int	i;

	len = (int)ft_strlen(trimmed);
	end = 0;
	i = 0;
	start = end;
	while (n_splits - i > 0)
	{
		if (trimmed[end] == c || (trimmed[end] == 0))
		{
			splits[i] = ft_substr(trimmed, start, end - start);
			i++;
			while (trimmed[end] == c)
				end++;
			start = end;
		}
		end++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**splits;
	char	*trimmed;
	int		n_splits;

	trimmed = ft_strtrim(s, &c);
	n_splits = count_splits(trimmed, c);
	splits = ft_calloc(n_splits + 1, sizeof(char *));
	if (!splits)
		return (NULL);
	do_splitting(splits, trimmed, c, n_splits);
	free(trimmed);
	return (splits);
}
