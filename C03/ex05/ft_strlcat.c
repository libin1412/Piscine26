/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 20:46:54 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/08 20:37:29 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	dlen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	slen = 0;
	while (src[slen] != '\0')
		slen++;
	if (size <= dlen)
		return (size + slen);
	i = 0;
	while (src[i] != '\0' && dlen + i < size - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

/*main
int	main(void)
{
	char	a[20] = "Hello";
	char	b[10] = "Hello ";
	char	c[20] = "hello ";

	printf("fits : %u -> %s\n", ft_strlcat(a, "42", 20), a);
	printf("cut off : %u -> %s\n", ft_strlcat(b, "Wolfsburg", 10), b);
	printf("no room : %u ->%s\n", ft_strlcat(c, "42", 9), c);
	return (0);
}
*/
