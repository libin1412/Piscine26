/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:21:58 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/12 18:39:02 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb < 0)
		return (0);
	i = 1;
	fact = 1;
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

/*main
int	main(void)
{
	printf("5! : %d\n", ft_iterative_factorial(5));
	printf("1! : %d\n", ft_iterative_factorial(1));
	printf("-5! : %d\n", ft_iterative_factorial(-5));
	printf("14! : %d\n", ft_iterative_factorial(14));
	printf("0! : %d\n", ft_iterative_factorial(0));
	return (0);
}
*/
