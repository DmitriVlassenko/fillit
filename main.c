/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlassen <dvlassen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:56:30 by dvlassen          #+#    #+#             */
/*   Updated: 2020/07/19 21:26:12 by dvlassen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{

	// this part ir checking if file with tetraminos is correct

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit tetramino_file\n");
		return (0);
	}
	if (!(ft_validator(argv[1])))
	{
		ft_putstr("file is empty or invalid\n");
		return (0);
	}

	// this part just printing the file with getnextline , probably we delete it later.

	char	*line;
	int		fd;
	int		ret;

	fd = open(argv[1], O_RDONLY);
	line = NULL;
	ret = 1;
	while (ret)
	{
		ret = get_next_line(fd, &line);
		printf("%s\n", line);
		ft_strdel(&line);
	}
	close(fd);
	return (0);
}
