/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 21:42:10 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/10 22:21:32 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*main function
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
		return (0);
	}
	printf("%d\n", ft_atoi("  ++---++--34245"));
	printf("%d\n", ft_atoi("     \t\n\v-34d45"));
	printf("%d\n", ft_atoi("     \t\n \v-34d45"));
	printf("%d\n", ft_atoi("     \t\n\v- 34d45"));
	printf("%d\n", ft_atoi("  45"));
	printf("%d\n", ft_atoi("  abc34245"));
	printf("%d\n", ft_atoi("  ++---++- 245"));
	printf("%d\n", ft_atoi("  ++---++--342a45"));
	return (0);
}
*/
