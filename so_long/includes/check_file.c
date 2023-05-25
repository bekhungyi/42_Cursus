/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:48:42 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/05/24 02:36:29 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	read_map(char *filename, int *height, int *length, t_vars *vars)
{
	int		fd;
	char	*line;
	char	*buffer;

	height = 0;
	*length = 0;
	fd = open (filename, O_RDONLY);
	if (fd < 0)
		return (0);
	line = "";
	while (1)
	{
		buffer = get_next_line(fd);
		if (buffer == NULL)
			break ;
		line = ft_strjoin(line, buffer);
		free(buffer);
		height++;
	}
	vars->map = ft_split(line, '\n');
	*length = ft_strlen(vars->map[1]);
	free (line);
	close (fd);
	return (1);
}

int	check_filetype(char *str)
{
	int		len;
	char	*filetype;

	len = ft_strlen (str);
	filetype = &str[(len - 4)];
	if (ft_strncmp (filetype, ".ber", 4) != 0)
	{
		ft_printf("Invalid \".ber\" file.");
		exit(0);
		return (0);
	}
	return (1);
}

int	check_file(int ac, char **av, t_vars *vars)
{
	int	map_h;
	int	map_l;

	if (ac == 2 && check_filetype(av[1]) == 1)
	{
		if (!read_map(av[1], &map_h, &map_l, vars))
		{
			ft_printf("File %s not found.\n", av[1]);
			return (0);
		}
		vars->map_height = map_h;
		vars->map_length = map_l;
		if (!check_map(vars))
			return (0);
	}
	return (1);
}
