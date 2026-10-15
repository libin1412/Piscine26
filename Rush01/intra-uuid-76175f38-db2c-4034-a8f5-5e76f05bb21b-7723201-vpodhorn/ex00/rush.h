/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpodhorn <vpodhorn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 12:49:59 by vpodhorn          #+#    #+#             */
/*   Updated: 2026/10/04 21:11:12 by vpodhorn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*rm_space(char *str);
void	print_grid(int size, char arr[size][size]);
void	initial_grid(int size, char grid[size][size]);
void	insert_input_grid(int size, char *str, char grid[size][size]);
int		get_size(char *str);
int		is_uniq(int size, int row, int col, char arr[size][size]);
int		ft_solve(int size, char grid[size][size], int pos,
			char v_grid[4][size]);
int		is_uniq(int size, int row, int col, char arr[size][size]);
int		check_all(int size, char grid[size][size], char v_grid[4][size]);
int		check_col(int size, char grid[size][size], int col,
			char v_grid[4][size]);
int		count_col(int size, char grid[size][size], int col, int step);
int		check_characters(char *str);
int		str_len(char *str);
int		check_input(int argc, char **argv);