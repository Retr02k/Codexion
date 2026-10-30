/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_coders.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:12:43 by psilva-p          #+#    #+#             */
/*   Updated: 2026/10/30 02:40:44 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "init/init.h"
#include "utils/utils.h"
#include <pthread.h>
#include <stdlib.h>

t_status	init_sim(t_config config)
{
	t_sim			*simulation;
	pthread_t		monitor_thread;
	pthread_mutex_t	log_mutex;
	pthread_mutex_t	state_mutex;

	if (pthread_create(&monitor_thread, NULL, NULL, NULL))
		return (ERROR_MONITOR_THREAD);
	(void)config;
	simulation = malloc(sizeof(t_sim));
	if (!simulation)
		return (ERROR_MALLOC);
	simulation->config = config;
	simulation->started_ms = get_time();
	simulation->coders = malloc(sizeof(t_coder) * config.number_of_coders);
	if (!simulation->coders)
		return (ERROR_MALLOC);
	simulation->dongles = malloc(sizeof(t_dongle) * config.number_of_coders);
	if (!simulation->dongles)
		return (ERROR_MALLOC);
	simulation->monitor_thread = monitor_thread;
	simulation->log_mutex = log_mutex;
	simulation->state_mutex = state_mutex;


	return (OK);
}

// t_status	init_coders(t_sim *sim)
// {
//
// 	return (OK);
// }
