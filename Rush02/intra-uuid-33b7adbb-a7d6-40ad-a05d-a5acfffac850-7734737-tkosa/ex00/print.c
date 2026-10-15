/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkosa <tkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:48:53 by tkosa             #+#    #+#             */
/*   Updated: 2026/10/11 18:48:54 by tkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_word(t_dict *dict, char *word)
{
	if (!word)
	{
		dict->missing = 1;
		return ;
	}
	if (dict->printing && dict->need_space)
		write(1, " ", 1);
	if (dict->printing)
		ft_putstr(word);
	dict->need_space = 1;
}
