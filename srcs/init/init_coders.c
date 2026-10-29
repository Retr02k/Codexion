/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_coders.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:12:43 by psilva-p          #+#    #+#             */
/*   Updated: 2026/10/29 13:25:27 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include <bits/pthreadtypes.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	t_dongle	dongle;
	t_coder		coder;

	(void)argc;
	(void)argv;
	printf("%zu\n", sizeof(dongle));
	printf("%zu\n", sizeof(coder));
	return (0);
}
