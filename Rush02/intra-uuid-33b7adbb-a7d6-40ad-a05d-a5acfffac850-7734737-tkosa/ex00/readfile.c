/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkosa <tkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:48:56 by tkosa             #+#    #+#             */
/*   Updated: 2026/10/11 18:48:57 by tkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*read_whole_file(char *path)
{
	char	buf[BUF_SIZE];
	char	*content;
	int		fd;
	int		ret;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	content = NULL;
	ret = read(fd, buf, BUF_SIZE);
	while (ret > 0)
	{
		content = ft_strnjoin(content, buf, ret);
		if (!content)
			ret = -1;
		else
			ret = read(fd, buf, BUF_SIZE);
	}
	close(fd);
	if (ret < 0)
	{
		free(content);
		return (NULL);
	}
	return (content);
}
