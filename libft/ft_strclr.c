/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blavonne <blavonne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:11:44 by blavonne          #+#    #+#             */
/*   Updated: 2019/09/28 14:38:14 by blavonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_strclr(char *s)
{
	size_t	i;

	if (s)
	{
		i = (size_t)ft_strlen(s);
		ft_bzero(s, i);
	}
}
