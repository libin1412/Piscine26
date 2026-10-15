/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbabu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:49:48 by lbabu             #+#    #+#             */
/*   Updated: 2026/10/07 20:43:58 by lbabu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/*main
int	main(void)
{
	printf("find 42: %s\n", ft_strstr("Hello 42 Wolfsburg", "42"));
	printf("find Wolf: %s\n", ft_strstr("Hello 42 Wolfsburg", "Wolf"));
	printf("find 42: %s\n", ft_strstr("aaab", "aab"));
	return (0);
}
*/
