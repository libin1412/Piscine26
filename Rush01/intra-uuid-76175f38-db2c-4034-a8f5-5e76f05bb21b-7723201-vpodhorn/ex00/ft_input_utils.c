/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpodhorn <vpodhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 20:46:51 by ewachter          #+#    #+#             */
/*   Updated: 2026/10/04 21:25:10 by vpodhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	check_characters(char *str)
{
	char	*ptr;
	int		i;

	ptr = str;
	i = 0;
	while (*ptr != '\0')
	{
		if (((i % 2) == 0) && (*ptr < '1' || *ptr > '9'))
			return (0);
		if (((i % 2) != 0) && (*ptr != ' '))
			return (0);
		ptr++;
		i++;
	}
	return (1);
}

int	str_len(char *str)
{
	int		len;
	char	*ptr;

	len = 0;
	ptr = str;
	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}
	return (len);
}
