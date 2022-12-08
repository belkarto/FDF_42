/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:38:48 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/08 18:50:39 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fdf.h"

int	ft_close(int key, t_data *data)
{
	if (key == 53)
	{
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
		exit (1);
	}
	else if (key == 49)
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
	else
		printf("%d\n", key);
		return (0);
}

void	my_mlx_pixel_put(t_img *img, int x, int y, int color)
{
	char	*dst;

	dst = img->addr + (y * img->line_length + x * (img->bits_per_pixel/8));
	*(unsigned int*)dst = color;
}
