/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:39:56 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/12 19:56:41 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*main
int	main(void)
{
	printf("5! : %d\n", ft_recursive_factorial(5));
	printf("0! : %d\n", ft_recursive_factorial(0));
	printf("-4! : %d\n", ft_recursive_factorial(-4));
	printf("5! : %d\n", ft_recursive_factorial(9));
	return (0);
}
*/
