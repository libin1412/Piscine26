/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:29:35 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/07 19:07:48 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* main function 
int	main(void)
{
	char	a[50] = "Hello";
	char	b[50] = "World";

	printf("string is this: %s\n", ft_strcat(a, " 42 leute!"));
	printf("string is this: %s\n", ft_strcat(a, b));
	printf("string is this: %s\n", ft_strcat(b, "42 leute!"));
	printf("string is this: %s\n", ft_strcat(a, "42222!"));
	return (0);
}
*/
