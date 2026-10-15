/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:10:05 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/13 22:27:57 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	s;

	if (nb < 0)
		return (0);
	s = 1;
	while (s < nb / s)
		s++;
	if (nb / s == s && nb % s == 0)
		return (s);
	return (0);
}

/*main
int	main(void)
{
	printf("sqrt of 8: %d\n", ft_sqrt(8));
	printf("sqrt of 8: %d\n", ft_sqrt(9));
	printf("sqrt of 8: %d\n", ft_sqrt(47));
	printf("sqrt of 8: %d\n", ft_sqrt(225));
	return (0);
}
*/
