/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:38:04 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/04/06 01:31:00 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

int		count_until_n(char *str);
int		ft_strlen(char *str);
char	*ft_strjoin(char *save, char *buf, int r);
int		ft_strchr(char *str, char c);
char	*ft_getline(char *save);
char	*ft_setnewline(char *save);
char	*ft_readline(int fd, char *save);
char	*get_next_line(int fd);

#endif
