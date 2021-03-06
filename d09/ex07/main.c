/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 22:39:29 by kyork             #+#    #+#             */
/*   Updated: 2016/08/18 22:55:49 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int			ft_collatz_conjecture(unsigned int base);

typedef unsigned int	t_testcase[2];

t_testcase				g_tests[] = {
	{1, 0},
	{2, 1},
	{3, 7},
	{4, 2},
	{5, 5},
	{6, 8},
	{7, 16},
	{8, 3},
	{9, 19},
	{10, 6},
	{11, 14},
	{12, 9},
	{13, 9},
	{14, 17},
	{15, 17},
	{16, 4},
	{17, 12},
	{18, 20},
	{19, 20},
	{20, 7},
	{21, 7},
	{22, 15},
	{23, 15},
	{24, 10},
	{25, 23},
	{26, 10},
	{27, 111},
	{97, 118},
	{871, 178},
	{6171, 261},
	{77031, 350},
	{837799, 524},
	{8400510, 129},
	{63728126, 127},
	{1073741824, 30},
	{1431655764, 33},
	{2863311528, 34},
};

int						main(void)
{
	int				i;
	unsigned int	result;

	i = 0;
	while (i < (int)(sizeof(g_tests) / sizeof(t_testcase)))
	{
		result = ft_collatz_conjecture(g_tests[i][0]);
		printf("collatz(%u) = %u %u\n", g_tests[i][0], result, g_tests[i][1]);
		if (result != g_tests[i][1])
			printf("FAIL\n");
		i++;
	}
}
