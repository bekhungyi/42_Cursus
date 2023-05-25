/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:52:20 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/05/23 17:33:42 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	**clone_map(t_vars *vars)
{
	int		i;
	char	**map_clone;

	map_clone = (char **) malloc (vars->map_height * sizeof (char *));
	i = 0;
	while (i < vars->map_height)
	{
		map_clone[i] = strdup(vars->map[i]);
		i++;
	}
	return (map_clone);
}

void	free_map_clone(char **map_clone, t_vars *vars)
{
	int	i;

	i = 0;
	while (i < vars->map_height)
	{
		free(map_clone[i]);
		i++;
	}
	free(map_clone);
}

void	find_player(t_vars *vars)
{
	int	x;
	int	y;

	x = 0;
	while (x < vars->map_height)
	{
		y = 0;
		while (y < vars->map_length)
		{
			if (vars->map[x][y] == 'P')
			{
				vars->x = x;
				vars->y = y;
			}
			y++;
		}
		x++;
	}
}

int	check_valid_path(t_vars *vars)
{
	int		x;
	int		y;
	char	**map_clone;

	map_clone = clone_map(vars);
	find_player(vars);
	x = vars->x;
	y = vars->y;
	if (path_algo(map_clone, x, y, vars) == 0)
	{
		ft_printf ("No valid path.\n");
		return (0);
	}
	free_map_clone (map_clone, vars);
	return (1);
}
