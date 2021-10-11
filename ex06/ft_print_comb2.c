/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohwang <seohwang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:57:28 by seohwang          #+#    #+#             */
/*   Updated: 2021/10/11 21:10:55 by seohwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar(a / 10 + 48);
			ft_putchar(a % 10 + 48);
			ft_putchar(32);
			ft_putchar(b / 10 + 48);
			ft_putchar(b % 10 + 48);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
