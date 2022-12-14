/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltranca- <ltranca-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:42:07 by ltranca-          #+#    #+#             */
/*   Updated: 2022/09/14 15:19:34 by ltranca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int a)

{
	if (a >= 32 && a <= 127)
	{
		return (1);
	}
	return (0);
}

int main(void)
{
	char r;
	int c;
	int d;

	r = '~';
	c = ft_isprint(r);
	d = isprint(r);
	printf("%d\n", c);
	printf("%d", d);
}