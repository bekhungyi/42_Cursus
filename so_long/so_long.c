/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:16:50 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/05/24 02:31:15 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_vars	vars;

	vars.p_count = 0;
	vars.e_count = 0;
	if (ac == 2 && check_file(ac, av, &vars))
	{
		render (&vars);
		mlx_loop(vars.mlx);
	}
	else if (vars.p_count > 1 || vars.e_count > 1)
	{
		ft_printf("Error.\nMultiple \"P\" or \"E\" were found in the map.");
		return (0);
	}
	else
		ft_printf("Error.\nMap is invalid or not found.");
	return (0);
}
