/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shapes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:38:40 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/08 20:31:24 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_rec(t_data *data, t_rect *rect)
{
	int	x;
	int	y;

	x = rect->x;
	while (x < rect->x + rect->width)
	{
		y = rect->y;
		while (y < rect->y + rect->height)
			my_mlx_pixel_put(&data->img, x, y++, rect->color);
		x++;
	}
	return (0);
}
