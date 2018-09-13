/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 13:37:34 by mphaka            #+#    #+#             */
/*   Updated: 2017/09/25 12:06:38 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void		ft_delarray(char **array)
{
	int			i;

	i = 0;
	while (array[i] != NULL)
	{
		ft_strdel(&array[i]);
		i++;
	}
	free(array);
}

int			main(int argc, char **argv, char **env)
{
	t_data		p;
	char		*line;
	char		**arg;

	argv = NULL;
	argc = 1;
	ft_env_loop(env, &p);
	while (argc)
	{
		ft_putstr("$>");
		if (get_next_line(0, &line) < 0)
			ft_putstr("error");
		arg = ft_split(line);
		ft_strdel(&line);
		argc = sh_execute(arg, &p);
		line = NULL;
		ft_delarray(arg);
	}
	ft_delarray(p.g_env);
	return (0);
}
