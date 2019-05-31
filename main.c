/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <mstepina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 16:37:45 by mstepina          #+#    #+#             */
/*   Updated: 2019/05/31 16:51:19 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

int		main(int ac, char **av)
{
int		fd;
char	*line;
if (ac == 1)
	fd = 0;
else if (ac == 2)
	fd = open(av[1], O_RDONLY);
else
	return (2);
while (get_next_line(fd, &line) == 1)
{
	ft_putendl(line);
	free(line);
}
if (ac == 2)
	close(fd);
}