/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:01:15 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/12 19:54:19 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	val;

	val = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		val = val * nb;
		power--;
	}
	return (val);
}

/*main
int	main(void)
{
	int	n;

	n = ft_iterative_power(2, 3);
	printf(" 2 raise to 3: %d\n", n);
	printf(" power of 2 by 8: %d\n", ft_iterative_power(2,8));
	printf(" power of 2 by 8: %d\n", ft_iterative_power(0,0));
	printf(" power of 2 by 8: %d\n", ft_iterative_power(2,-8));
	return (0);
}
*/
