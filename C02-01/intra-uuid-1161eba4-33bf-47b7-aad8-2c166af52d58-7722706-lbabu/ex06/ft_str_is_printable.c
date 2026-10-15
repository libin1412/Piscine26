/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:29:12 by lbabu             #+#    #+#             */
/*   Updated: 2026/09/30 21:45:55 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("Hello 42!: %d \n", ft_str_is_printable("Hello 42!"));
	printf("He\\n!: %d \n", ft_str_is_printable("He\n"));
	printf("Hello\\42!: %d \n", ft_str_is_printable("Hello\there"));
	printf("Empty : %d \n", ft_str_is_printable(""));
	return (0);
}
*/
