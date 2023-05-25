/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 01:00:40 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/05/23 21:22:46 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_len(t_vars *vars)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(vars->map[i]);
	while (vars->map[++i])
	{
		if (len != ft_strlen(vars->map[i]))
			return (0);
	}
	vars->map_height = i;
	vars->map_length = len;
	return (1);
}

int	check_walls(t_vars *vars)
{
	int		i;
	int		r_side;
	char	*buffer_top;
	char	*buffer_bottom;

	i = vars->map_height;
	buffer_top = vars->map[0];
	buffer_bottom = vars->map[--i];
	r_side = ft_strlen(vars->map[0]) - 1;
	i = -1;
	while (++i < r_side)
	{
		if (buffer_top[i] != '1' || buffer_bottom[i] != '1')
			return (0);
	}
	i = 0;
	while (++i < vars->map_height)
	{
		buffer_top = vars->map[i];
		{
			if (buffer_top[0] != '1' || buffer_top[r_side] != '1')
				return (0);
		}
	}
	return (1);
}

int	check_items(t_vars *vars)
{
	int		i;
	int		j;

	vars->p_count = 0;
	vars->e_count = 0;
	vars->c_count = 0;
	i = 0;
	while (++i < vars->map_height)
	{
		j = 0;
		while (++j < vars->map_length)
		{
			if (vars->map[i][j] == 'P')
				vars->p_count++;
			else if (vars->map[i][j] == 'E')
				vars->e_count++;
			else if (vars->map[i][j] == 'C')
				vars->c_count++;
		}
	}
	if (vars->p_count != 1 || vars->e_count != 1 || vars->c_count < 1)
		return (0);
	return (1);
}

int	check_extra(t_vars *vars)
{
	int		x;
	int		y;
	char	c;

	x = 0;
	while (x < vars->map_height)
	{
		y = 0;
		while (y < vars->map_length)
		{
			c = vars->map[x][y];
			if (c != '0' && c != '1' && c != 'P' && c != 'E' && c != 'C')
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int	check_map(t_vars *vars)
{
	if (check_len(vars) == 0)
		return (0);
	else if (check_walls(vars) == 0)
		return (0);
	else if (check_items(vars) == 0)
		return (0);
	else if (check_extra(vars) == 0)
		return (0);
	else if (check_valid_path(vars) == 0)
		return (0);
	return (1);
}
