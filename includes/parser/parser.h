/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:34:13 by psilva-p          #+#    #+#             */
/*   Updated: 2026/10/26 19:35:45 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include <unistd.h>
# include <stdbool.h>
# include <limits.h>
# include "types.h"

# define DECIMAL_BASE "0123456789"
# define SCHEDULER_BASE "edfio"

t_status	settings_setter(t_type type, int *base, int *offset);
int			is_allowed_char(char *allowed, char c);
t_status	validate_arg(char *str, t_type type);
t_status	push_digit(int	*acc, int digit, int base);
t_status	parse_arg(char *str, int *out, t_type type);

#endif
