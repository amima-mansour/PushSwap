/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amansour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 10:54:32 by amansour          #+#    #+#             */
/*   Updated: 2017/10/18 10:05:13 by amansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	exit_msg(char *str)
{
	write(1, str, ft_strlen(str));
	exit(0);
	return ;
}
