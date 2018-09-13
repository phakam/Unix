/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:13:51 by mphaka            #+#    #+#             */
/*   Updated: 2017/09/26 11:55:05 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# define BUFF_SIZE 1000
# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_data
{
	char			**g_env;
}					t_data;

int					sh_launch(char **args, char **envp);
int					ft_env_loop(char **env, t_data *p);
int					get_next_line(int const fd, char **line);
char				**ft_split(char *str);
void				ft_delarray(char **array);
int					sh_cd(char **argv, char **env);
int					ft_env_loop(char **env, t_data *p);
int					ft_env(char **env);
char				*get_env_var(char *variable, char **env);
int					sh_execute(char **args, t_data *p);
void				sh_cleaner(char **dir, char *n, char *tmp);
char				*sh_path(char **p, char **n);
int					sh_clear(void);
int					ft_unsetenv(char **env, char *str);
char				*sh_realloc(char *str2);
int					sh_echo(char **argv, t_data *p);
int					sh_setenv(char *arg, t_data *p);
char				**ft_arraydup(char **env);
void				sh_increase_array(char *str, t_data *p);
char				**ft_sstrnew(size_t size);
int					ft_sstrlen(char **s);

#endif
