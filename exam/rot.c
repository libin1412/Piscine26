/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 22:47:41 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/15 23:24:37 by lbabu            ###   ########.fr       */
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

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'a' && argv[1][i] <= 'm')
				|| (argv[1][i] >= 'A' && argv[1][i] <= 'M'))
					argv[1][i] = argv[1][i] + 13;
		else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z')
			|| (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
			argv[1][i] -= 13;
	ft_putchar(argv[1][i]);
	i++;
	}
	write(1, "\n", 1);
	return (0);
}
