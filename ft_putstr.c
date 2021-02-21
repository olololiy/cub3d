//
// Created by Violet Furr on 2/21/21.
//
#include "lib.h"

void		ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}