/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkosa <tkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:48:32 by tkosa             #+#    #+#             */
/*   Updated: 2026/10/11 18:48:33 by tkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_strndup(char *src, int n)
{
	char	*copy;
	int		i;

	copy = malloc(n + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < n)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

static char	*copy_chars(char *dst, char *src, int n)
{
	while (n > 0)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	return (dst);
}

char	*ft_strnjoin(char *s1, char *s2, int n)
{
	int		len;
	char	*res;
	char	*startres;

	len = 0;
	if (s1)
		len = ft_strlen(s1);
	res = malloc(len + n + 1);
	if (!res)
	{
		free(s1);
		return (NULL);
	}
	startres = res;
	res = copy_chars(res, s1, len);
	res = copy_chars(res, s2, n);
	*res = '\0';
	free(s1);
	return (startres);
}

t_entry	*make_entries(int count)
{
	t_entry	*e;
	int		i;

	e = malloc(sizeof(t_entry) * count);
	if (!e)
		return (NULL);
	i = 0;
	while (i < count)
	{
		e[i].key = NULL;
		e[i].value = NULL;
		i++;
	}
	return (e);
}

void	free_dict(t_dict *dict)
{
	int	size;

	size = dict->size;
	while (size > 0)
	{
		size--;
		free(dict->entries[size].key);
		free(dict->entries[size].value);
	}
	free(dict->entries);
	dict->entries = NULL;
	dict->size = 0;
}
