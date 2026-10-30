/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:34:06 by psilva-p          #+#    #+#             */
/*   Updated: 2026/10/29 22:13:47 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init/init.h"
#include "types.h"
#include "utils/utils.h"
#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	t_config	config;
	t_status	status;

	status = init_configs(ac, av, &config);
	if (status != OK)
		return (status);
	printf("%i\n", config.number_of_coders);
	printf("%i\n", config.time_to_burnout);
	printf("%i\n", config.time_to_compile);
	printf("%i\n", config.time_to_debug);
	printf("%i\n", config.time_to_refactor);
	printf("%i\n", config.number_of_compiles_required);
	printf("%i\n", config.dongle_cooldown);
	if (config.scheduler == FT_SCHED_EDF)
		printf("It's edf!\n");
	else if (config.scheduler == FT_SCHED_FIFO)
		printf("It's fifo!\n");

	return (status);
}
