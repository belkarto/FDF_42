/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:21:12 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/08 20:47:14 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fdf.h"

int	ft_mouse(int key,int x, int y, t_data *data)
{
	printf("%d %d %d\n", key, x, y);
	return (0);
}

int	ft_close1(t_data *data)
{
	exit(1);
	return (0);
}

int main()
{
	t_data	data;
	t_rect	rect;

	rect.x=0;
	rect.y=0;
	rect.width=100;
	rect.height=100;
	rect.color=RED;
	data.mlx_ptr = mlx_init();
	data.win_ptr = mlx_new_window(data.mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT, "FDF");
	data.img.img = mlx_new_image(data.mlx_ptr, WINDOW_WIDTH, WINDOW_HEIGHT);
	data.img.addr = mlx_get_data_addr(data.img.img, &data.img.bits_per_pixel, &data.img.line_length, &data.img.endian);
	ft_rec(&data, &rect);
	mlx_put_image_to_window(&data.img, data.win_ptr, data.img.img, WINDOW_WIDTH/2, WINDOW_HEIGHT/2);
	mlx_key_hook(data.win_ptr, ft_close, &data);
	mlx_loop(data.mlx_ptr);
}
