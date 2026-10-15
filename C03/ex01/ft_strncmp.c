/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 20:23:54 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/06 22:01:21 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	st1;
	unsigned char	st2;
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		st1 = (unsigned char)s1[i];
		st2 = (unsigned char)s2[i];
		if (st1 != st2 || st1 == '\0')
			return (st1 - st2);
		i++;
	}
	return (0);
}

/* main fn
int	main(void)
{
	printf("abc vs abc : %d\n", ft_strncmp("abcdef", "abcxyz", 3));
	printf("abc vs abc : %d\n", ft_strncmp("abcdef", "abcxyz", 4));
	printf("abc vs abc : %d\n", ft_strncmp("abc", "abc", 10));
	printf("abc vs abc : %d\n", ft_strncmp("ab", "abc", 3));
	printf("abc vs abc : %d\n", ft_strncmp("abc", "xyz", 0));
	return (0);
}
*/
