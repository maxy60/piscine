/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:36:13 by msainton          #+#    #+#             */
/*   Updated: 2021/02/05 16:32:07 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char o;
	char p;

	o = 'N';
	p = 'P';
	if (n < 0)
	{
		write(1, &o, 1);
	}
	else
		write(1, &p, 1);
}
