/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 21:50:20 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/15 22:05:05 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}

	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}

	i = 0;
	while (argv[1][i])
	{
	       if (argv[1][i] == argv[2][0])
		       argv[1][i] = argv[3][0];
	       ft_putchar(argv[1][i]);
	       i++;
	}
	write(1, "\n", 1);
	return (0);
}
