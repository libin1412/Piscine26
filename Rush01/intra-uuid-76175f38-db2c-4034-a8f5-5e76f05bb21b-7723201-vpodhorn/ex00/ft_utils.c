/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpodhorn <vpodhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:09:48 by vpodhorn          #+#    #+#             */
/*   Updated: 2026/10/04 20:48:23 by vpodhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "rush.h"

void	print_grid(int size, char arr[size][size])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			write(1, &arr[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		j = 0;
		write(1, "\n", 1);
		i++;
	}
}

int	is_uniq(int size, int row, int col, char arr[size][size])
{
	char	val;
	int		i;
	int		j;

	val = arr[row][col];
	i = 0;
	j = 0;
	while (i < size)
	{
		if (val == arr[row][i] && i != col)
			return (0);
		i++;
	}
	while (j < size)
	{
		if (val == arr[j][col] && j != row)
			return (0);
		j++;
	}
	return (1);
}

int	check_all(int size, char grid[size][size], char v_grid[4][size])
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!check_col(size, grid, i, v_grid))
			return (0);
		i++;
	}
	return (1);
}

int	count_col(int size, char grid[size][size], int col, int step)
{
	int		i;
	int		count;
	char	max;

	if (step == 1)
		i = 0;
	else
		i = size - 1;
	count = 0;
	max = '0';
	while (i >= 0 && i < size)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			count++;
		}
		i += step;
	}
	return (count);
}
