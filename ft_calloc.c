/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:58:43 by vfurr             #+#    #+#             */
/*   Updated: 2020/11/27 11:56:44 by vfurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned	char *g;

	g = s;
	while (n)
	{
		*g = c;
		g++;
		n--;
	}
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

void	*ft_calloc(size_t count, size_t size)
{
	char *p;

	if (!(p = malloc(size * count)))
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
