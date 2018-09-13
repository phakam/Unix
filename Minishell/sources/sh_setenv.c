/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:40:00 by mphaka            #+#    #+#             */
/*   Updated: 2017/09/26 11:59:25 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		sh_setenv(char *arg, t_data *p)
{
	if (arg == NULL)
		ft_putstr("setenv: expected argument to set.\n");
	else
		sh_increase_array(arg, p);
	return (1);
}
