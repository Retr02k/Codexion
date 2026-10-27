/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-p <psilva-p@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:54:18 by psilva-p          #+#    #+#             */
/*   Updated: 2026/10/27 20:44:21 by psilva-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H

# include <unistd.h>
# include "types.h"

t_status	init_numeric(char **av, t_config *config);
t_status	init_scheduler(char *av, t_config *config);
t_status	validate_config(t_config *config);
t_status	init_configs(int ac, char **av, t_config *config);

#endif
