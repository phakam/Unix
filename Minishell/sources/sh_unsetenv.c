/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sh_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:06:19 by mphaka            #+#    #+#             */
/*   Updated: 2017/09/26 12:05:33 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		ft_unsetenv(char **env, char *str)
{
	int		i;
	int		nbr;

	i = -1;
	nbr = 0;
	if (str == NULL)
	{
		ft_putstr("unsetenv: expect argument to unset.\n");
		return (1);
	}
	while (env[nbr])
		nbr++;
	while (env[++i])
	{
		if (ft_strncmp(env[i], str, ft_strlen(str) - 1) == 0)
		{
			while (i < nbr - 1)
			{
				env[i] = sh_realloc(env[i + 1]);
				i++;
			}
			(env[i] != NULL) ? env[i] = sh_realloc(NULL) : NULL;
		}
	}
	return (1);
}
