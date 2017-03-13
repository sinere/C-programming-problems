/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 18:34:25 by yooi              #+#    #+#             */
/*   Updated: 2016/08/21 18:52:19 by smifsud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

void	print_sudoku(char arr[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(arr[i][j]);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}