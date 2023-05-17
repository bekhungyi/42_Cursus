/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:10:37 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/04/25 19:06:06 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putstr(char *str);
void	ft_putnbr(int n);
void	ft_putchar(char c);
size_t	ft_strlen(const char *str);
int		ft_atoi(const char *nptr);

#endif