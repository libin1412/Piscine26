/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpodhorn <vpodhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 11:15:11 by vpodhorn          #+#    #+#             */
/*   Updated: 2026/10/04 22:05:07 by vpodhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	input_grid[4][9];
	char	grid[9][9];
	int		size;

	if (check_input(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	size = get_size(argv[1]);
	str = rm_space(argv[1]);
	insert_input_grid(size, str, input_grid);
	initial_grid(size, grid);
	if (!ft_solve(size, grid, 0, input_grid))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	print_grid(size, grid);
	return (0);
}
