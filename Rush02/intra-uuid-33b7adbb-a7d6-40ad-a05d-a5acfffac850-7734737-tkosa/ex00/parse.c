/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkosa <tkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:48:50 by tkosa             #+#    #+#             */
/*   Updated: 2026/10/11 18:48:51 by tkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static int	only_spaces(char *s, char *end)
{
	while (s < end && *s == ' ')
		s++;
	return (s == end);
}

static int	find_key_end(char *s, int len, int *start)
{
	char	*begin;
	char	*end;

	begin = s;
	end = s + len;
	while (s + 1 < end && *s == '0' && ft_is_digit(*(s + 1)))
		s++;
	*start = s - begin;
	while (s < end && ft_is_digit(*s))
		s++;
	return (s - begin);
}

static int	find_value_end(char *s, int len, int *start)
{
	char	*begin;
	char	*end;

	begin = s;
	end = s + len;
	while (s < end && *s == ' ')
		s++;
	if (s == end || *s != ':')
		return (-1);
	s++;
	while (s < end && *s == ' ')
		s++;
	*start = s - begin;
	while (end > s && *(end - 1) == ' ')
		end--;
	if (end == s)
		return (-1);
	while (s < end)
	{
		if ((unsigned char)*s < 32 || *s == 127)
			return (-1);
		s++;
	}
	return (end - begin);
}

static int	cut_line(char *s, int len, t_entry *e)
{
	int	k_start;
	int	k_end;
	int	v_start;
	int	v_end;

	e->key = NULL;
	e->value = NULL;
	k_end = find_key_end(s, len, &k_start);
	if (k_end == k_start)
		return (0);
	v_end = find_value_end(s + k_end, len - k_end, &v_start);
	if (v_end < 0)
		return (0);
	e->key = ft_strndup(s + k_start, k_end - k_start);
	e->value = ft_strndup(s + k_end + v_start, v_end - v_start);
	return (e->key && e->value);
}

int	parse_lines(char *s, t_dict *dict)
{
	char	*end;

	while (*s)
	{
		end = s;
		while (*end && *end != '\n')
			end++;
		if (!only_spaces(s, end))
		{
			dict->size++;
			if (!cut_line(s, end - s, &dict->entries[dict->size - 1]))
				return (0);
		}
		s = end;
		if (*s == '\n')
			s++;
	}
	return (dict->size > 0);
}
