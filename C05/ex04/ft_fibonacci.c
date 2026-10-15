/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 21:32:53 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/13 13:08:20 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*main
int	main(void)
{
	printf("fibonacci is: %d\n", ft_fibonacci(3));
	printf("fibonacci is: %d\n", ft_fibonacci(0));
	printf("fibonacci is: %d\n", ft_fibonacci(-3));
	printf("fibonacci is: %d\n", ft_fibonacci(8));
	return (0);
}
*/
