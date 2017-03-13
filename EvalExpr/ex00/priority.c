/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   priority.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 16:37:19 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 23:04:13 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			priority(char x)
{
	if (x == '(')
		return (0);
	if (x == '+' || x == '-')
		return (1);
	if (x == '*' || x == '/' || x == '%')
		return (2);
	return (3);
}
