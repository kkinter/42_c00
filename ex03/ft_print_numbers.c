/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohwang <seohwang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:37:47 by seohwang          #+#    #+#             */
/*   Updated: 2021/10/11 17:40:20 by seohwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	_start;

	_start = '0';
	while (_start <= '9')
	{
		write(1, &_start, 1);
		_start++;
	}
}
