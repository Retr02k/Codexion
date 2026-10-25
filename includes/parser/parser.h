/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:34:13 by psilva-p          #+#    #+#             */
/*   Updated: 2026/10/25 21:37:51 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include <unistd.h>
# include <stdio.h>
# include <stdbool.h>
# include <limits.h>

# define DECIMAL_BASE "0123456789"
# define SCHEDULER_BASE "edfio"
# define SCHED_EDF 6644838
# define SCHED_FIFO 1718183535

typedef enum e_parsing_exit_codes
{
	OK,
	ERROR_NON_INT,
	ERROR_OVERFLOW,
	ERROR_SCHEDULER,
	ERROR_SIGNED_INT,
	ERROR_EMPTY_ARG,
	ERROR_NULL_POINTER,
	ERROR_INVALID_TYPE,
	ERROR_INVALID_SCHEDULER,
	ERROR_NOT_ALLOWED_CHAR,
	ERROR_CABECA_DE_PUDIM,
}	t_status;

typedef enum e_parser_type
{
	INT,
	SCHEDULER,
}	t_type;

t_status	settings_setter(t_type type, int *base, int *offset);
int			is_allowed_char(char *allowed, char c);
t_status	validate_arg(char *str, t_type type);
t_status	push_digit(int	*acc, int digit, int base);
t_status	parse_arg(char *str, int *out, t_type type);

#endif
