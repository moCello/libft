/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:08:01 by mmarcell       #+#    #+#                */
/*   Updated: 2020/02/27 14:09:54 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strdel(char **as)
{
	int		i;

	if (!as || !(*as))
		return ;
	i = 0;
	while ((*as)[i] != 0)
	{
		(*as)[i] = 0;
		++i;
	}
	free(*as);
	*as = NULL;
}
