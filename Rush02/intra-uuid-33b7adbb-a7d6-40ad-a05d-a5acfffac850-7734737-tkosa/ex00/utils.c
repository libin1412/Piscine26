/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkosa <tkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:49:02 by tkosa             #+#    #+#             */
/*   Updated: 2026/10/11 18:49:03 by tkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_strlen(char *s)
{
	char	*start;

	start = s;
	while (*s)
		s++;
	return (s - start);
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*check_input(char *s)
{
	char	*p;

	if (!*s)
		return (NULL);
	p = s;
	while (*p)
	{
		if (!ft_is_digit(*p))
			return (NULL);
		p++;
	}
	while (*s == '0' && ft_is_digit(*(s + 1)))
		s++;
	return (s);
}
