/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruotolo <sruotolo@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:02:51 by sruotolo          #+#    #+#             */
/*   Updated: 2023/04/26 12:05:26 by sruotolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*runner;

	runner = (char *) s;
	while (*runner)
	{
		if (*runner == (char) c)
			return (runner);
		runner++;
	}
	if (*runner == (char) c)
		return (runner);
	return (NULL);
}
