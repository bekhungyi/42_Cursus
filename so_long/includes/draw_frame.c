/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_frame.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:00:23 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/05/23 16:25:13 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

// void	img_draw(t_vars *vars, void *image, int x, int y)
// {
// 	mlx_put_image_to_window (vars->mlx, vars->win, image, x * 32, y * 32);
// }

void	map_draw_extnd(t_vars *vars, int x, int y)
{
	if (x == vars->x && y == vars->y)
		mlx_put_image_to_window
			(vars->mlx, vars->win, vars->player, y * 32, x * 32);
	else if (vars->map[x][y] == '1')
		mlx_put_image_to_window
			(vars->mlx, vars->win, vars->wall, y * 32, x * 32);
	else if (vars->map[x][y] == 'E')
		mlx_put_image_to_window
			(vars->mlx, vars->win, vars->exit, y * 32, x * 32);
	else if (vars->map[x][y] == 'C')
		mlx_put_image_to_window
			(vars->mlx, vars->win, vars->collectibles, y * 32, x * 32);
	else
		mlx_put_image_to_window
			(vars->mlx, vars->win, vars->bg, y * 32, x * 32);
}

void	map_draw(t_vars *vars)
{
	int	x;
	int	y;

	x = 0;
	while (x < vars->map_height)
	{
		y = 0;
		while (y < vars->map_length)
		{
			map_draw_extnd(vars, x, y);
			y++;
		}
		x++;
	}
}
