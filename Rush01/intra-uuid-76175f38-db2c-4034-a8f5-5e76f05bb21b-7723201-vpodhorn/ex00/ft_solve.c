/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpodhorn <vpodhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:44:29 by vpodhorn          #+#    #+#             */
/*   Updated: 2026/10/04 20:44:31 by vpodhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "rush.h"

int	count_visible_towers(char *line, int size)
{
	char	max_h;
	int		i;
	int		visible_count;

	visible_count = 0;
	max_h = '0';
	i = 0;
	while (i < size)
	{
		if (line[i] > max_h)
		{
			visible_count++;
			max_h = line[i];
		}
		i++;
	}
	return (visible_count);
}

int	count_visible_reverse(char *line, int size)
{
	char	max_h;
	int		i;
	int		visible_count;

	visible_count = 0;
	max_h = '0';
	i = size - 1;
	while (i >= 0)
	{
		if (line[i] > max_h)
		{
			visible_count++;
			max_h = line[i];
		}
		i--;
	}
	return (visible_count);
}

int	check_row(int size, char grid[size][size], int row, char v_grid[4][size])
{
	int	left;
	int	right;

	left = count_visible_towers(grid[row], size);
	right = count_visible_reverse(grid[row], size);
	if (left != v_grid[2][row] - '0')
		return (0);
	if (right != v_grid[3][row] - '0')
		return (0);
	return (1);
}

int	check_col(int size, char grid[size][size], int col,
		char v_grid[4][size])
{
	if (count_col(size, grid, col, 1) != v_grid[0][col] - '0')
		return (0);
	if (count_col(size, grid, col, -1) != v_grid[1][col] - '0')
		return (0);
	return (1);
}

int	ft_solve(int size, char grid[size][size], int pos, char v_grid[4][size])
{
	int	nb;
	int	r;
	int	c;

	if (pos == size * size)
		return (check_all(size, grid, v_grid));
	r = pos / size;
	c = pos % size;
	if (grid[r][c] != '0')
		return (ft_solve(size, grid, pos + 1, v_grid));
	nb = 1;
	while (nb <= size)
	{
		grid[r][c] = nb + '0';
		if (is_uniq(size, r, c, grid))
		{
			if (c != size - 1 || check_row(size, grid, r, v_grid))
				if (ft_solve(size, grid, pos + 1, v_grid))
					return (1);
		}
		grid[r][c] = '0';
		nb++;
	}
	return (0);
}
