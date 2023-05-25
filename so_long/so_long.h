/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:17:57 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/05/23 21:20:11 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif

# include "./libft/libft.h"
# include "./mlx/mlx.h"
# include <fcntl.h>
# include <unistd.h>

typedef struct s_vars
{
	void	*mlx;
	void	*win;
	void	*img;
	int		map_height;
	int		map_length;
	char	**map;
	int		rows;
	int		x;
	int		y;
	int		p_count;
	int		e_count;
	int		c_count;
	int		window_closed;
	int		img_l;
	int		img_h;
	void	*wall;
	void	*player;
	void	*exit;
	void	*collectibles;
	void	*space;
	void	*bg;
	int		steps;
	int		total_collected;
}			t_vars;

int		check_filetype(char *str);

int		check_file(int ac, char **av, t_vars *vars);

int		check_map(t_vars *vars);

int		check_valid_path(t_vars *vars);

int		path_algo(char **map, int x, int y, t_vars *vars);

void	render(t_vars *vars);

void	map_draw(t_vars	*vars);

void	event(t_vars *vars);

int		exit_game(void *param);

void	extra_pe(t_vars *vars);

#endif