/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 19:35:13 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/01 17:29:35 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("hello: %d \n", ft_str_is_lowercase("hello"));
	printf("Hello: %d \n", ft_str_is_lowercase("Hello"));
	printf("hello1: %d \n", ft_str_is_lowercase("hello1"));
	printf("empty: %d \n", ft_str_is_lowercase(""));
	return (0);
}
*/
