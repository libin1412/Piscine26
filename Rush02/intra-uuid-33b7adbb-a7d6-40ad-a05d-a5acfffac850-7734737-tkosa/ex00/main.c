/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkosa <tkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:48:43 by tkosa             #+#    #+#             */
/*   Updated: 2026/10/11 18:48:44 by tkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static int	fail(char *msg)
{
	ft_putstr(msg);
	return (1);
}

int	main(int argc, char **argv)
{
	t_dict	dict;
	char	*path;
	char	*num;
	int		ok;

	if (argc < 2 || argc > 3)
		return (fail("Error\n"));
	num = check_input(argv[argc - 1]);
	if (!num)
		return (fail("Error\n"));
	path = "numbers.dict";
	if (argc == 3)
		path = argv[1];
	if (!make_dict(path, &dict))
		return (fail("Dict Error\n"));
	ok = say_whole_number(&dict, num);
	free_dict(&dict);
	return (!ok);
}
