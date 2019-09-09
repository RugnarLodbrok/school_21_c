/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksticks <ksticks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:33:55 by ksticks           #+#    #+#             */
/*   Updated: 2019/09/05 19:34:21 by ksticks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "utility.h"

int	read_file(char *fn)
{
	int			fd;
	int			n;
	const int	buff_size = 256;
	char		buff[buff_size];

	if ((fd = open(fn, O_RDONLY)) < 0)
		return (display_err("File not found\n", 1));
	if (read(fd, buff, 0) < 0)
		return (display_err("Is directory\n", 1));
	while ((n = read(fd, buff, buff_size)))
		write(1, buff, n);
	return (0);
}

int	main(int ac, char **av)
{
	av++;
	ac--;
	if (!ac)
		return (display_err("File name missing.\n", 1));
	if (ac > 1)
		return (display_err("Too many arguments.\n", 1));
	if (read_file(av[0]))
		return (1);
	return (0);
}
