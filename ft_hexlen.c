/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablondel <ablondel@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 22:25:08 by ablondel          #+#    #+#             */
/*   Updated: 2020/12/22 01:11:11 by ablondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_hexlen(unsigned long n)
{
	int i;

	i = 0;
	if (n < 16)
		return (1);
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}
