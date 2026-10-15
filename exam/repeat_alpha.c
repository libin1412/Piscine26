/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 20:48:23 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/15 21:22:50 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	indexing(char c)
{
	int	i;

	if (c >= 'a' && c <= 'z')
		i = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		i = c - 'A' + 1;
	else 
		i = 1;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	index;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		index = indexing(argv[1][i]);
		while (index > 0)
		{
			ft_putchar(argv[1][i]);
			index--;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}	
