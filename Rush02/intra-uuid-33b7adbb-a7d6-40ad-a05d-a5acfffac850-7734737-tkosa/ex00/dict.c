/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkosa <tkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:48:34 by tkosa             #+#    #+#             */
/*   Updated: 2026/10/11 18:48:35 by tkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static int	how_many_lines(char *s)
{
	int	count;

	count = 1;
	while (*s)
	{
		if (*s == '\n')
			count++;
		s++;
	}
	return (count);
}

int	make_dict(char *path, t_dict *dict)
{
	char	*content;
	int		ok;

	dict->entries = NULL;
	dict->size = 0;
	content = read_whole_file(path);
	if (!content)
		return (0);
	dict->entries = make_entries(how_many_lines(content));
	if (!dict->entries)
	{
		free(content);
		return (0);
	}
	ok = parse_lines(content, dict);
	free(content);
	if (!ok)
		free_dict(dict);
	return (ok);
}
