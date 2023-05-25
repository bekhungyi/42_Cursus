/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:44:22 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/05/23 21:34:38 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	extra_pe(t_vars *vars)
{
	if (vars->p_count > 1 || vars->e_count > 1)
		ft_printf ("Multiple Exit/Start were found in the map.\n");
}

int	exit_game(void *param)
{
	exit(0);
}

void	pickup(t_vars *vars, int x, int y)
{
	vars->map[x][y] = '0';
	vars->total_collected++;
}

void	reach_exit(t_vars *vars, int x, int y)
{
	if (vars->total_collected == vars->c_count)
		exit_game(NULL);
	else
		return ;
}

void	event(t_vars *vars)
{
	int	x;
	int	y;

	x = vars->x;
	y = vars->y;
	if (vars->map[x][y] == 'C')
		pickup(vars, x, y);
	if (vars->map[x][y] == 'E')
		reach_exit(vars, x, y);
}
