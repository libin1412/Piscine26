/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:11:58 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/06 20:22:45 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	st1;
	unsigned char	st2;
	int				i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	st1 = (unsigned char)s1[i];
	st2 = (unsigned char)s2[i];
	return (st1 - st2);
}
/* main section

int	main(void)
{
	printf("abc vs abc : %d\n", ft_strcmp("abc", "abc"));
	printf("abc vs abc : %d\n", ft_strcmp("abc", "abd"));
	printf("abc vs abc : %d\n", ft_strcmp("abc", "ab"));
	printf("abc vs abc : %d\n", ft_strcmp("ab", "abc"));
	return (0);
}
*/
