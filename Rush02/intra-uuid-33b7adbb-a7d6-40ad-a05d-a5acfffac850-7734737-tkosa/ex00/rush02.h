/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkosa <tkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 18:48:59 by tkosa             #+#    #+#             */
/*   Updated: 2026/10/11 18:49:00 by tkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUF_SIZE 4096

typedef struct s_entry
{
	char	*key;
	char	*value;
}	t_entry;

typedef struct s_dict
{
	t_entry	*entries;
	int		size;
	int		printing;
	int		missing;
	int		need_space;
}	t_dict;

int		ft_strlen(char *s);
void	ft_putstr(char *s);
int		ft_strcmp(char *s1, char *s2);
int		ft_is_digit(char c);
char	*check_input(char *s);
char	*ft_strndup(char *src, int n);
char	*ft_strnjoin(char *s1, char *s2, int n);
t_entry	*make_entries(int count);
void	free_dict(t_dict *dict);
char	*read_whole_file(char *path);
int		parse_lines(char *s, t_dict *dict);
int		make_dict(char *path, t_dict *dict);
char	*find_word(t_dict *dict, char *key);
char	*find_number_word(t_dict *dict, int n);
char	*find_big_word(t_dict *dict, int zeros);
void	print_word(t_dict *dict, char *word);
void	say_three_digits(t_dict *dict, int val, int power);
int		digits_to_int(char *s, int len);
int		say_whole_number(t_dict *dict, char *num);

#endif
