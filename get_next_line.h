/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:21:06 by mstepina          #+#    #+#             */
/*   Updated: 2019/05/29 18:08:16 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>

# include "libft/libft.h"

# define BUFF_SIZE 10

int		get_next_line(const int fd, char **line);
int		read_func(int fd, char **str, int res);
void	checker(int fd, char **line, char **str);
void	n_check(int fd, char **line, char **str);
void	end_check(int fd, char **line, char **str);

#endif
