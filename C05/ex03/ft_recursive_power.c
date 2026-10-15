/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:58:47 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/12 20:23:53 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}

/*main
int	main(void)
{
	printf("power is: %d\n", ft_recursive_power(2, 5));
	printf("power is: %d\n", ft_recursive_power(0, 0));
	printf("power is: %d\n", ft_recursive_power(2, -5));
	printf("power is: %d\n", ft_recursive_power(5, 3));
	return (0);
}
*/
