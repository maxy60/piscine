/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msainton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:19:13 by msainton          #+#    #+#             */
/*   Updated: 2021/02/21 15:27:39 by msainton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{

	if (argc == 2)
		ft_str_is_numeric(argv[1]);
	if (argc == 3)
		ft_str_is_numeric(argv[2]);

}
