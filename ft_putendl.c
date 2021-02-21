//
// Created by Violet Furr on 2/21/21.
//
#include "lib.h"

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_putendl(char *s)
{
	if (s)
	{
		write(1, s, ft_strlen(s));
		write(1, "\n", 1);
	}
}