/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 01:37:29 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/05/22 02:23:20 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	path_algo(char **map, int x, int y, t_vars *vars)
{
	if (map[x][y] == 'E')
		return (1);
	map[x][y] = 'V';
	if (x > 0 && map[x -1][y] != 'V' && map[x -1][y] != '1')
	{
		if (path_algo(map, x -1, y, vars) == 1)
			return (1);
	}
	if (x < vars->map_height - 1 && map[x +1][y] != 'V' && map[x +1][y] != '1')
	{
		if (path_algo(map, x +1, y, vars) == 1)
			return (1);
	}
	if (y > 0 && map[x][y -1] != 'V' && map[x][y -1] != '1')
	{
		if (path_algo(map, x, y -1, vars) == 1)
			return (1);
	}
	if (y < vars->map_length - 1 && map[x][y +1] != 'V' && map[x][y +1] != '1')
	{
		if (path_algo(map, x, y +1, vars) == 1)
			return (1);
	}
	return (0);
}
