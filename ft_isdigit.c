/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 20:04:43 by mmarcell       #+#    #+#                */
/*   Updated: 2020/01/18 16:51:21 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
