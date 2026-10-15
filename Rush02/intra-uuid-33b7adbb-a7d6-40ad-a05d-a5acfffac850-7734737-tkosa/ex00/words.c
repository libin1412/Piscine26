/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   words.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkosa <tkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:49:04 by tkosa             #+#    #+#             */
/*   Updated: 2026/10/11 18:49:05 by tkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static void	say_tens(t_dict *dict, int val)
{
	char	*exact;

	exact = find_number_word(dict, val);
	if (exact || val < 20)
	{
		print_word(dict, exact);
		return ;
	}
	print_word(dict, find_number_word(dict, val / 10 * 10));
	if (val % 10)
		print_word(dict, find_number_word(dict, val % 10));
}

static void	say_hundreds(t_dict *dict, int val)
{
	if (val >= 100)
	{
		print_word(dict, find_number_word(dict, val / 100));
		print_word(dict, find_number_word(dict, 100));
	}
	if (val % 100)
		say_tens(dict, val % 100);
}

void	say_three_digits(t_dict *dict, int val, int power)
{
	say_hundreds(dict, val);
	if (power > 0)
		print_word(dict, find_big_word(dict, power * 3));
}

int	digits_to_int(char *s, int len)
{
	int	val;

	val = 0;
	while (len > 0)
	{
		val = val * 10 + (*s - '0');
		s++;
		len--;
	}
	return (val);
}
