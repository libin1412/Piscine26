/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkosa <tkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:48:47 by tkosa             #+#    #+#             */
/*   Updated: 2026/10/11 18:48:48 by tkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static void	say_all_groups(t_dict *dict, char *num)
{
	int	power;
	int	glen;
	int	val;

	if (*num == '0')
	{
		print_word(dict, find_number_word(dict, 0));
		return ;
	}
	power = (ft_strlen(num) - 1) / 3;
	glen = ft_strlen(num) - power * 3;
	while (power >= 0)
	{
		val = digits_to_int(num, glen);
		if (val > 0)
			say_three_digits(dict, val, power);
		num += glen;
		glen = 3;
		power--;
	}
}

int	say_whole_number(t_dict *dict, char *num)
{
	dict->printing = 0;
	dict->missing = 0;
	dict->need_space = 0;
	say_all_groups(dict, num);
	if (dict->missing)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	dict->printing = 1;
	dict->need_space = 0;
	say_all_groups(dict, num);
	ft_putstr("\n");
	return (1);
}
