/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:48:45 by pleander          #+#    #+#             */
/*   Updated: 2024/05/23 11:43:16 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../include/ft_printf.h"

void	print_char(int data, t_result *r)
{
	if (r->buf_size > r->written)
	{
		r->buffer[r->written] = data;
	}
	r->written++;
}

void	print_string(char *data, size_t n, t_result *r)
{
	size_t	i;

	i = 0;
	while (data[i] && i < n)
	{
		print_char(data[i], r);
		i++;
	}
}
