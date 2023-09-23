/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruotolo <sruotolo@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:17:16 by sruotolo          #+#    #+#             */
/*   Updated: 2023/04/26 12:05:11 by sruotolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c2;

	str = (unsigned char *)s;
	c2 = (unsigned char)c;
	while (n--)
	{
		if (*str == c2)
			return (str);
		str++;
	}
	return (NULL);
}
