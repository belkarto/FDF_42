/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belkarto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:43:59 by belkarto          #+#    #+#             */
/*   Updated: 2022/12/08 20:32:32 by belkarto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include <stdlib.h>
# include "my_lib/libft.h"
# include <stdio.h>
# define WINDOW_WIDTH 1200
# define WINDOW_HEIGHT 700

//----CCOLORS----//
# define WHITHE	0X00ffffff
# define BLACK	0X00000000
# define RED	0X00ff0000
# define BLEU	0X000000ff
# define GREEN	0X0000ff00
# define ORANGE 0X00ff7000
# define YELLOW	0X00ffff00

typedef struct s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_img;

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_img	img;
}	t_data;

typedef struct s_rect
{
	int	x;
	int	y;
	int	width;
	int	height;
	int	color;
}	t_rect;

void	my_mlx_pixel_put(t_img *img, int x, int y, int color);
int	ft_rec(t_data *data, t_rect *rect);
int	ft_close(int key, t_data *data);
#endif
