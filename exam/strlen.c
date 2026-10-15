/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 20:41:06 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/15 20:46:21 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	printf("length: %d\n", ft_strlen("car"));
	printf("length: %d\n", ft_strlen("caitasdasdeer"));
	printf("length: %d\n", ft_strlen(" "));
	printf("length: %d\n", ft_strlen(""));
	return (0);
}
