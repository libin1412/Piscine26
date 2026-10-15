/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpodhorn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:44:20 by vpodhorn          #+#    #+#             */
/*   Updated: 2026/10/04 19:18:42 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this is the output file

#include <unistd.h>
#include "rush.h"

void	initial_grid(int size, char grid[size][size])
{
	int	row;
	int	col;

	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
			grid[row][col++] = '0';
		row++;
	}
}
