/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobso <jjacobso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:00:56 by jjacobso          #+#    #+#             */
/*   Updated: 2019/01/10 10:56:43 by jjacobso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strnlen(char *s, size_t len)
{
	size_t		l;

	l = 0;
	if (!s)
		return (0);
	while (*s && l < len)
	{
		s++;
		l++;
	}
	return (l);
}
