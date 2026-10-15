/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 20:12:15 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/10 20:30:22 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/* main function
int	main(void)
{
	int	len;

	len = ft_strlen("how is 42 doing?\n");
	printf("length is: %d\n", len);
	printf("empty attempt: %d\n", ft_strlen(""));
	return (0);
}
*/
