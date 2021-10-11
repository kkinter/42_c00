/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohwang <seohwang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:33:45 by seohwang          #+#    #+#             */
/*   Updated: 2021/10/11 17:37:00 by seohwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	_first;

	_first = 'z';
	while (_first >= 'a')
	{
		write(1, &_first, 1);
		_first--;
	}
}
