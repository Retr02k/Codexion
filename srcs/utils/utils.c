/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 16:10:38 by psilva-p          #+#    #+#             */
/*   Updated: 2026/10/29 22:16:30 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/utils.h"

long	get_time()
{
	struct timeval	tv;
	struct timezone	tz;

	if (gettimeofday(&tv, &tz))
		return (ERROR_CLOCK);
	return (tv.tv_sec * 1000) + (tv.tv_usec / 1000);
}
