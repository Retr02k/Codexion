/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:31:48 by psilva-p          #+#    #+#             */
/*   Updated: 2026/10/27 20:06:35 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# define SCHED_EDF 6644838
# define SCHED_FIFO 1718183535

typedef enum e_status
{
	OK = 0,
	ERROR_NON_INT = 1,
	ERROR_OVERFLOW = 2,
	ERROR_SCHEDULER = 3,
	ERROR_SIGNED_INT = 4,
	ERROR_EMPTY_ARG = 5,
	ERROR_NULL_POINTER = 6,
	ERROR_INVALID_TYPE = 7,
	ERROR_INVALID_SCHEDULER = 8,
	ERROR_NOT_ALLOWED_CHAR = 9,
	ERROR_INVALID_ARG_COUNT = 10,
	ERROR_INVALID_NUMERIC_INIT = 11,
	ERROR_NO_CODER = 12,
}	t_status;

typedef enum e_parser_type
{
	INT,
	SCHEDULER,
}	t_type;

typedef struct s_config
{
	int		number_of_coders;
	int		time_to_burnout;
	int		time_to_compile;
	int		time_to_debug;
	int		time_to_refactor;
	int		number_of_compiles_required;
	int		dongle_cooldown;
	int		scheduler;
}	t_config;

#endif
