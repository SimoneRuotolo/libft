/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruotolo <sruotolo@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:37:34 by sruotolo          #+#    #+#             */
/*   Updated: 2023/04/26 12:05:30 by sruotolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*p;

	p = dst;
	if (dstsize != 0)
	{
		while (--dstsize != 0)
		{
			*p = *src;
			if (*p == '\0')
				return (p - dst);
			p++;
			src++;
		}
		*p = '\0';
	}
	return ((p - dst) + ft_strlen(src));
}
