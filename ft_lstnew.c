/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jshondra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:29:33 by jshondra          #+#    #+#             */
/*   Updated: 2020/11/05 16:24:39 by jshondra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

t_list	*ft_lstnew(void *content)
{
	t_list *elem1;

	elem1 = malloc(sizeof(t_list));
	if (elem1)
	{
		elem1->content = content;
		elem1->next = (NULL);
	}
	return (elem1);
}
