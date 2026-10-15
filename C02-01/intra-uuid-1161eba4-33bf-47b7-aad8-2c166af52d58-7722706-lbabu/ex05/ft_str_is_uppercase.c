/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:12:00 by lbabu             #+#    #+#             */
/*   Updated: 2026/09/30 21:23:28 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("ABCD : %d \n", ft_str_is_uppercase("ABCD"));
	printf("AB CD : %d \n", ft_str_is_uppercase("A COD"));
	printf("ABcCD : %d \n", ft_str_is_uppercase("AcCD"));
	printf("A2D : %d \n", ft_str_is_uppercase("A2BCD"));
	printf("Empty : %d \n", ft_str_is_uppercase(""));
	return (0);
}
*/
