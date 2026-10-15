/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 22:28:40 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/13 22:44:00 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*main
int	main(void)
{
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(-2));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(97));
	return (0);
}
*/
