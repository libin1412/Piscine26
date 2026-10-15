/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkosa <tkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:48:37 by tkosa             #+#    #+#             */
/*   Updated: 2026/10/11 18:48:38 by tkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static int	is_power_of_ten(char *key, int zeros)
{
	if (*key != '1')
		return (0);
	key++;
	while (*key == '0')
	{
		key++;
		zeros--;
	}
	return (*key == '\0' && zeros == 0);
}

char	*find_word(t_dict *dict, char *key)
{
	t_entry	*e;
	t_entry	*end;

	e = dict->entries;
	end = e + dict->size;
	while (e < end)
	{
		if (ft_strcmp(e->key, key) == 0)
			return (e->value);
		e++;
	}
	return (NULL);
}

char	*find_number_word(t_dict *dict, int n)
{
	char	key[4];
	char	*p;

	p = key + 3;
	*p = '\0';
	p--;
	*p = '0' + n % 10;
	n /= 10;
	while (n > 0)
	{
		p--;
		*p = '0' + n % 10;
		n /= 10;
	}
	return (find_word(dict, p));
}

char	*find_big_word(t_dict *dict, int zeros)
{
	t_entry	*e;
	t_entry	*end;

	e = dict->entries;
	end = e + dict->size;
	while (e < end)
	{
		if (is_power_of_ten(e->key, zeros))
			return (e->value);
		e++;
	}
	return (NULL);
}
