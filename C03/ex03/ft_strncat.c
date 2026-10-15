/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:24:22 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/07 19:45:51 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* main fn
int	main(void)
{
	char	a[20] = "hello ";
	char	b[20] = "42 ";

	printf("%s\n", ft_strncat(a, b, 2));
	printf("%s\n", ft_strncat(a, "boys", 10));
	printf("%s\n", ft_strncat(a, "Water", 0));
	return (0);
}
*/
