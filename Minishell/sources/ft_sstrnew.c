/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:14:03 by mphaka            #+#    #+#             */
/*   Updated: 2017/09/18 13:20:26 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

char	**ft_sstrnew(size_t size)
{
	char	**s;
	size_t	i;

	i = 0;
	if (!(s = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	while (i < (size))
		s[i++] = NULL;
	s[i] = NULL;
	return (s);
}
