/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 15:15:09 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/11 17:20:00 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	n;

	len = ft_check_base(base);
	if (len == 0)
		return ;
	n = nbr;
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n >= len)
		ft_putnbr_base(n / len, base);
	write(1, &base[n % len], 1);
}

/*main
int	main(void)
{
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-255, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0230");
	write(1, "\n", 1);
	return (0);
}
*/
