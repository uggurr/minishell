/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uguyildi <uguyildi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:27:19 by uguyildi          #+#    #+#             */
/*   Updated: 2023/08/17 13:27:20 by uguyildi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	export_size(void)
{
	int	i;

	i = 0;
	while (g_glbl.export[i])
		i++;
	return (i);
}

void	free_char(char **arg)
{
	int	i;

	i = 0;
	while (arg[i] != NULL)
	{
		free(arg[i]);
		i++;
	}
	free(arg);
}

void	ft_add_env(char *arg)
{
	char	**new_env;

	new_env = malloc(sizeof(char *) * (export_size() + 2));
	ft_adding_env(new_env, arg);
}

void	ft_add_export(char *arg)
{
	char	**new_export;

	new_export = malloc(sizeof(char *) * (export_size() + 2));
	ft_adding_export(new_export, arg);
}
