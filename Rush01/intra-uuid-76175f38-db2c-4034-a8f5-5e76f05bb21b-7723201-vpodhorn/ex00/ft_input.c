/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpodhorn <vpodhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:44:07 by vpodhorn          #+#    #+#             */
/*   Updated: 2026/10/04 22:02:10 by vpodhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	check_input(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	if (str_len(argv[1]) == 0)
		return (0);
	if (((str_len(argv[1]) + 1) / 2) % 4 != 0)
		return (0);
	if (((str_len(argv[1]) + 1) / 2) < 16)
		return (0);
	if (((str_len(argv[1]) + 1) / 2) > 36)
		return (0);
	if (check_characters(argv[1]) == 0)
		return (0);
	return (1);
}

char	*rm_space(char *str)
{
	char	*read;
	char	*write;

	read = str;
	write = str;
	while (*read != '\0')
	{
		if (*read != ' ')
		{
			*write = *read;
			write++;
		}
		read++;
	}
	*write = '\0';
	return (str);
}

int	get_size(char *str)
{
	char	*str1;
	int		i;

	str1 = rm_space(str);
	i = 0;
	while (str1[i] != '\0')
	{
		i++;
	}
	return (i / 4);
}

void	insert_input_grid(int size, char *str, char grid[size][size])
{
	int	m;
	int	n;

	m = 0;
	n = 0;
	while (m < 4)
	{
		while (n < size)
		{
			grid[m][n] = str[m * size + n];
			n++;
		}
		m++;
		n = 0;
	}
}
