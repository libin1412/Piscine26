/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 20:42:18 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/11 16:56:02 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

/*main
int	main(void)
{
	ft_putnbr(2674);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-23);
	write(1, "\n", 1);
	ft_putnbr(-2147483644);
	return (0);
}
*/
