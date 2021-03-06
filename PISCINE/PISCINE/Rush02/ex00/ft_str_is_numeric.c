/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:53:37 by msainton          #+#    #+#             */
/*   Updated: 2021/02/20 14:56:01 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
int	ft_str_is_numeric(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 48 || str[a] > 57)
			return (0);
		a++;
	}
	return (1);
}
